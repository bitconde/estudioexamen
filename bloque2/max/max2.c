/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 12:34:05 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/20 12:42:42 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int max(int* tab, unsigned int len)
{
	int num_max;
	size_t i;

	i = 1;
	num_max = tab[0];
	while(i < len)
	{
		if(tab[i] > num_max)
			num_max = tab[i];
		i++;
	}
	return(num_max);
}
int main()
{
    int array[] = {3, 1, 8, 5, 3, 2};
    unsigned int len = 6;

    int result = max(array, len);
    printf("El valor máximo es: %d\n", result);

    return 0;
}