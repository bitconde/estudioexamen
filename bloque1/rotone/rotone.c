/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:37:09 by mconde-s          #+#    #+#             */
/*   Updated: 2025/02/25 17:02:49 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[1])
{
    if(argc == 2)
    {
        size_t  i;

        i = 0;
    
        while(argv[1][i])
        {
            if((argv[1][i] >= 'a' && argv[1][i] <= 'y') || (argv[1][i] >= 'A' && argv[1][i] <= 'Y'))
            {
                argv[1][i] += 1;
                write(1, &argv[1][i], 1);
            }
            else if(argv[1][i] == 'z')
                write(1, "a", 1);
            else if(argv[1][i] == 'Z')
                write(1, "A", 1);
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}