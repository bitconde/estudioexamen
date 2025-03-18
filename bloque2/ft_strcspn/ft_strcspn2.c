/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:03:43 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/18 15:35:38 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    
    if(!s)
        return(i);
    while(s[i])
    {
        while(reject[j])
        {
            if(s[i] == reject[j])
                return(i);
            j++;
        }

        i++;
    }
    return(i);
}
