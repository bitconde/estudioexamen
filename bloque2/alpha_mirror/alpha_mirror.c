/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:54:08 by mconde-s          #+#    #+#             */
/*   Updated: 2025/02/27 16:32:49 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        size_t i;
        size_t j;
        char *alpha;
        char *max;
        
        alpha = "abcdefghijklmnopqrstuvwxyz";
        max = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        j = 0;
        i = 0;
        while(argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                while(argv[1][i] != alpha[j])
                    j++;
                argv[1][i] = 122 - j;
            }
            if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                while(argv[1][i] != max[j])
                    j++;
                argv[1][i] = 90 - j;
            }
            j = 0;
            write(1, &argv[1][i], 1);
            i++;
        }
        
    }
    write(1, "\n", 1);
    return(0);
}