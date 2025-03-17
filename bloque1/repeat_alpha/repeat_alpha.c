/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:44:07 by mconde-s          #+#    #+#             */
/*   Updated: 2025/02/25 13:19:01 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		size_t  i;
        size_t  j;

        j = 0;
		i = 0;

		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                //se resta 96 para saber la posición en la que se encuentra la letra. En ASCII 97 es 'a'.
                //Si lo hubiésemos restado con la 'a', a la hora de restar la 'a', nos habría dado 0, por eso
                //se hace con uno menos (lo mismo )
                j = argv[1][i] - 96;
                while(j--)
                    write(1, &argv[1][i], 1);
			}
            else if((argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
            {
                j = argv[1][i] - 64;
                while(j--)
                    write(1, &argv[1][i], 1);
            }
            else
			    write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}