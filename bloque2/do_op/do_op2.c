/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:34:54 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/17 18:54:47 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int nbr1;
	int nbr2;
	int result;


	if(argc == 4)
	{
		//recuerda meter estos argumentos dentro de la función porque puede dar problemas.
		nbr1 = atoi(argv[1]);
		nbr2 = atoi(argv[3]);

		if(argv[2][0] == '+')
			result = nbr1 + nbr2;
		if(argv[2][0] == '-')
			result = nbr1 - nbr2;
		if(argv[2][0] == '/')
			result = nbr1 / nbr2;
		if(argv[2][0] == '*')
			result = nbr1 * nbr2;
		if(argv[2][0] == '%')
			result = nbr1 % nbr2;
		printf("%d\n", result);
		return(0);
	}
	write(1, "\n", 1);
	return(0);
}