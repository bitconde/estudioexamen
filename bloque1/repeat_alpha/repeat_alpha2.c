/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 16:56:30 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/16 18:12:23 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
            count = 0;
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                count = argv[1][i] - 'a' + 1;
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                count = argv[1][i] - 'A' + 1;
            else
                write(1, &argv[1][i], 1);
            while(count >= 1)
            {
                write(1, &argv[1][i], 1);
                count--;
            }
            i++;
            
        } 
        write(1, "\n", 1);
        return(0);
    }
}
