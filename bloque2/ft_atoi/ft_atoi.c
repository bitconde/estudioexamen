/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:07:45 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/03 16:33:47 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
    size_t i;
    int nbr;
    int sing;
    
    sing = 1;
    i = 0;

    while(str[i] == ' ' || str[i] == '\t')
        i++;
    if(str[i] == '-')
    {
        sing *= -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    while(str[i] &&str[i] >= '0' && str[i] <= '9')
    {
        nbr *= 10;
        nbr += (str[i] - '0'); 
        i++;
    }
    return(nbr * sing);
    
}

int main(int argc, char *argv[])
{
    int nbr;
    int nbr2;
    
    nbr = ft_atoi(argv[1]);
    nbr2 = atoi(argv[2]);
    printf("%d\n", nbr);
    printf("%d\n", nbr2);
    return(0);
}