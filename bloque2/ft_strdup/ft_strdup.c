/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 15:41:04 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/18 16:13:49 by mconde-s         ###   ########.fr       */
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
    size_t len;
    size_t i;

    i = 0;
    len = ft_strlen(src);
    dst = malloc( len * sizeof(char) + 1);
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

