/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 18:17:49 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/15 11:31:24 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    if(argc == 2)
    {
        size_t  i;
        i = 0;
        //32 = "\n" y 9 = "\t"
        while(argv[1][i] == 32 || argv[1][i] == 9)
            i++;
        //esto está mal, tengo que poner &&.
        while((argv[1][i] != 32 || argv[1][i] == 9) && argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
        //María, recuerda que así solo escribe una sola palabra porque no hay un
        // while que recorra toda la string principal.
    }
    write(1,"\n",1);
    return(0);
}