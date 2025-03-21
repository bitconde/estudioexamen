/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 19:27:08 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/21 19:36:48 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int n)
{
    char c;

    if(n >= 10)
        ft_putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main()
{
    int nbr;

    nbr = 1;

    while(nbr <= 100)
    {
        if(nbr % 3 == 0 && nbr % 5 == 0)
            write(1, "fizzbuzz", 9);
        else if(nbr % 3 == 0)
            write(1, "fizz", 5);
        else if(nbr % 5 == 0)
            write(1, "buzz", 5);
        else
            ft_putnbr(nbr);
        write(1, "\n", 1);
        nbr++;
    }
    
}
