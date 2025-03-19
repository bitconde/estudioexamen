/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 19:23:56 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/19 19:30:27 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
    if(n == 0)
        return(0);
    return((n & n - 1) == 0);
}

int main()
{
    int n;
    int nbr;
    
    n = 8;
    nbr = is_power_of_2(n);
    printf("%d\n", nbr);
}