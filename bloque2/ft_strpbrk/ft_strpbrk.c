/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:21:18 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/18 21:15:39 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
            if(s1[i] == s2[j])
                return((char *)&s1[i]);
            j++;
        }
        i++;
    }
    return(NULL);
    
}