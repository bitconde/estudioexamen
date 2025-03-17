/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:00:18 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/06 17:49:17 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//La función strcspn (y por extensión ft_strcspn) busca caracteres específicos dentro de una cadena de texto. Imagina que tienes dos cadenas:
//La cadena en la que quieres buscar, por ejemplo: "abcdef123456"
//Una cadena que contiene los caracteres que estás buscando, por ejemplo: "123"
//Lo que strcspn hace es contar cuántos caracteres puedes leer desde el principio de la primera cadena sin encontrar ninguno de los caracteres de la segunda cadena.

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t j;

    j = 0;
    i = 0;
    
    while(s[i])
    {
        while(reject[j])
        {
            while(reject[j])
            {
                if((s[i] == reject[j]))
                    return(i);
                j++;
            }
        }
        i++;
    }
    return(i);
}

int main()
{
    char *s = "holaaa32";
    char *reject = "32";
    printf("%ld", ft_strcspn(s, reject));
    return(0);
}