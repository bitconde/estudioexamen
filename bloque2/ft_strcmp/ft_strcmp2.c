/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 19:19:00 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/18 14:15:16 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    ft_strcmp(char *s1, char *s2)
{
    size_t i;

    i = 0;

    while (s1[i] && (s1[i] == s2[i]))
        i++;
    return((unsigned char)s1[i] - (unsigned char)s2[i]);
}