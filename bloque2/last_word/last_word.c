/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 20:03:59 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/19 22:59:54 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

int main(int argc, char *argv[])
{
    size_t i;

    i = 0;

    if (argc == 2)
    {
        while(argv[1][i])
            i++;
        i--;
        while(i > 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
            i--;
        while(i > 0 && (argv[1][i] != ' ' && argv[1][i] != '\t'))
            i--;
        if(argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while(argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
        {
            write(1, &argv[1][i], 1);
            i++;
        }
            
    }

    write(1, "\n", 1);
    return (0);
} 