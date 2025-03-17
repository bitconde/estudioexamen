/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_132.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:36:56 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/17 11:44:37 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	size_t i;

	i = 0;

	if(argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'm')
				argv[1][i] += 13;
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
				argv[1][i] -= 13;
			else if((argv[1][i] >= 'A' && argv[1][i] <= 'M'))
				argv[1][i] += 13;
			else if((argv[1][i] >= 'N' && argv[1][i] <= 'Z'))
				argv[1][i] -= 13;
				write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		return(0);
	}
}