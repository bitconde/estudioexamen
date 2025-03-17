/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 11:34:40 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/16 13:05:39 by mconde-s         ###   ########.fr       */
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
   int n;

   n = 1;

   while(n <= 100)
   {
        if(n % 3 == 0 && n % 5 == 0)
            write(1, "fizzbuzz", 9);
        else if(n % 3 == 0)
            write(1, "fizz", 5);
        else if(n % 5 == 0)
            write(1, "buzz", 5);
        else
            ft_putnbr(n);
        write(1, "\n", 1);
        n++;
   }
   return(0);
    
}