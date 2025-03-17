/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:38:10 by mconde-s          #+#    #+#             */
/*   Updated: 2025/02/25 14:54:10 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        size_t  i;
        i = 0;
        
        while(argv[1][i])
            i++;
        while(i > 0)
        { 
            //es -1 para que apunte al último caracter válido de la cadena.
            write(1, &argv[1][i - 1], 1);
            i--;
        }
    }
    write(1, "\n", 1);
    return(0);
}