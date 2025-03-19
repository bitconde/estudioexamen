/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 23:09:25 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/19 23:35:09 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int max(int* tab, unsigned int len)
{
    int tmp;
    size_t i;
    i = 1;
    if(!tab)
        return(0);
    tmp = tab[0];
    while(i < len)
    {
        if(tab[i] > tmp)
            tmp = tab[i];
        i++;
    }
    return(tmp);
}


int main()
{
    int array[] = {3, 1, 8, 5, 3, 2};
    unsigned int len = 6;

    int result = max(array, len);
    printf("El valor máximo es: %d\n", result);

    return 0;
}