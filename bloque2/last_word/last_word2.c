/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:05:21 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/20 12:32:40 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	size_t i;
	size_t start;

	i = 0;

	if(argc == 2)
	{
		while(argv[1][i])
			i++;
		while(i > 0 && (argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t'))
			i--;
		start = i;
		while(i > 0 && (argv[1][i - 1] != ' ' && argv[1][i - 1] != '\t'))
			i--;
		while (i < start)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}