/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 20:00:34 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/21 20:29:37 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    size_t i;
    int count;
    i = 0;

    if(argc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                count = argv[1][i] - 'a';
            if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                count = argv[1][i] - 'A';
            while(count > 0)
            {
                write(1, &argv[1][i], 1);
                count--;
            }
            write(1, &argv[1][i], 1);
            
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}