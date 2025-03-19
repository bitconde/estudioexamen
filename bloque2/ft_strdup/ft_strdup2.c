/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:50:44 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/19 17:58:56 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

size_t ft_strlen(char *str)
{
    size_t i;
    
    i = 0;

    while(str[i])
        i++;
    return(i);
}
char    *ft_strdup(char *src)
{
    char *dst;
    size_t i;
    size_t len;
    
    len = ft_strlen(src);
    dst = malloc(len * sizeof(char) + 1);
    i = 0;
    
    if(!dst)
        return(NULL);
    while(src[i])
    {
        dst[i] = src[i];
        i++;             
    }
    dst[i] = '\0';
    
    return(dst);
}