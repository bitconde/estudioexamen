/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 19:07:02 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/19 19:11:33 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t ft_strlen(char *str)
{
    size_t i;

    i = 0;
    
    while(str[i])
        i++;
    return(i);
}
char    *ft_strrev(char *str)
{
    size_t i;
    size_t len;
    char tmp;

    len = ft_strlen(str);
    i = 0;
    
    if(!str)
        return(NULL);
    while(i < len /2)
    {
        tmp = str[i];
        str[i] = str[len -1 -i];
        str[len -1 -i] = tmp;
        i++;
    }
    

}