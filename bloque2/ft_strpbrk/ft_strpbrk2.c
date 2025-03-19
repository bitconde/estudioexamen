/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:00:20 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/19 19:06:11 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    size_t i;
    size_t j;
    
    i = 0;
    
    while(s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if(s2[j] == s1[i])
                return((char *)&s1[i]);
            j++;
        }
        i++;    
    }
    return(NULL);
}