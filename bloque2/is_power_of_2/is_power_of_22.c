/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_22.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:02:21 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/20 11:04:42 by mconde-s         ###   ########.fr       */
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

    n = 3;
    nbr = is_power_of_2(n);
    printf("%d\n", nbr);
}