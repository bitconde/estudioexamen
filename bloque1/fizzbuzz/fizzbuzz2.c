/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:36:15 by mconde-s          #+#    #+#             */
/*   Updated: 2025/02/24 16:29:42 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int n)
{
    //Necesitas de una variable caracter para que te imprima bien los números
    //si mantienes 'n', adoptará el valor ASCII e imprimirá otra cosa.
    char c;
    if(n >= 10)
        ft_putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}
int main()
{
    int i;
    
    i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizz", 5);
        else if (i % 5 == 0)
            write(1, "buzz", 5);
        else if (i % 3 == 0)
            write(1, "fizz", 5);
        else
            ft_putnbr(i);
        write(1, "\n", 1);
        i++;
    }
    return(0);
    
}