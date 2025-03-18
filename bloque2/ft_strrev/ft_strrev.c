/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 23:11:48 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/18 23:43:21 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
    char temp;
    
    len = ft_strlen(str);
    i = 0;

    while(i < len / 2)
    {
        temp = str[i];
        str[i] = str[len -1 - i];
        str[len -1 - i] = temp;
        i++;
    }
    return(str);
}

int main(int argc, char *argv[])
{
    char *str;
    str = ft_strrev(argv[1]);
    printf("%s\n", str);
    return(0);
}
