/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:04:12 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/17 19:00:36 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int nbr;
	int sing;
	size_t i;

	nbr = 0;
	i = 0;
	sing = 1;

	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sing *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr = nbr + (str[i] - '0');
		i++;
	}
	return(nbr * sing);
}