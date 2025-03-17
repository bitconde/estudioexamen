/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:37:48 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/16 13:35:57 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
    size_t  i;
    
    i = 0;
    //Se pone s2(source) porque no importa el contenido previo de s1.
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    //es importante añadir el '/0' si s2 es más corta que s1, el '\0' garantiza
    //que s1 no tenga carcteres basura.
    s1[i] = '\0';
    return(s1);
}