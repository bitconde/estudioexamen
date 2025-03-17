/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 17:06:54 by mconde-s          #+#    #+#             */
/*   Updated: 2025/02/25 18:04:42 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    if(argc == 4)
    {
        size_t  i;
        size_t j;
        j = 0;
        i = 0;
        
        while(argv[1][i] && argv[2][j + 1] == '\0' && argv[3][j + 1] == '\0')
        {
            if((argv[1][i] == argv[2][j]))
                argv[1][i] = argv[3][j];
            write(1, &argv[1][i], 1);
            i++;
        }
        
    }
    write(1, "\n", 1);
    return(0);
}