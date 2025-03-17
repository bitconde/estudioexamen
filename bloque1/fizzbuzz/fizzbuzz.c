/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:21:25 by mconde-s          #+#    #+#             */
/*   Updated: 2025/02/24 12:26:35 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main()
{
    int nbr;
    char aux;
    
    nbr = 1;
    
    while(nbr <= 100)
    {
        if(nbr % 3 == 0 && nbr % 5 == 0)
        write(1, "fizzbuzz", 9);
        else if(nbr % 5 == 0)
            write(1, "buzz", 5);
        else if (nbr % 3 == 0)
            write(1, "fizz", 5);
        else
        {
            if(nbr > 10)
            {
                aux = nbr;
                aux = (aux / 10) + '0';
                write(1, &aux, 1);
            } 
            aux = (nbr % 10) + '0';
            write(1, &aux, 1);
        }
        write(1, "\n", 1);
        nbr += 1;
    }   
    return(0);
}