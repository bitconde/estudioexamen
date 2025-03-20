/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 13:03:48 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/20 13:08:47 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				idx;
	unsigned char	bit;

	idx = 8;
	while (idx--)
	{
		bit = ((octet >> idx & 1) + '0');
		write(1, &bit, 1);
	}
}
