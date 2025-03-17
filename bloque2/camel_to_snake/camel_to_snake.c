r/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:43:48 by mconde-s          #+#    #+#             */
/*   Updated: 2025/02/27 18:51:49 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        size_t i;
        i = 0;
        while(argv[1][i])
        {

            if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                write(1, "_", 1);
            if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] += 32;
            write(1, &argv[1][i], 1);
            i++;

        }

    }
    write(1, "\n", 1);
    return(0);
}