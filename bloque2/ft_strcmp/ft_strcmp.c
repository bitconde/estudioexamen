/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:47:08 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/06 16:54:14 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    size_t i;

    i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int main()
{
    char *str = "123";
    char *str2 = "123";

    printf("%d\n", ft_strcmp(str, str2)); // Debe imprimir 0 porque las cadenas son iguales.
    return 0;
}


int main ()
{
    char *str = "123";
    char *str2 = "123";

    printf("%d\n", ft_strcmp(str,str2));
    return(0);
}