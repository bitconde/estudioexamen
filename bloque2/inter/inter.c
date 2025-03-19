/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 23:51:09 by mconde-s          #+#    #+#             */
/*   Updated: 2025/03/19 19:17:10 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <unistd.h>

//NO ESTÁ RESUELTO MIRAR.

int has_char(char *str, char c, int max_index)
{
    int i = 0;

    // Verifica si el carácter ya ha sido encontrado antes
    while (i < max_index)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

void ft_inter(char *s1, char *s2)
{
    int i = 0;

    while (s1[i])
    {
        // Comprueba si el carácter de s1 está en s2 y aún no ha sido mostrado
        if (!has_char(s1, s1[i], i) && has_char(s2, s1[i], -1))
            write(1, &s1[i], 1);
        i++;
    }
    write(1, "\n", 1); // Finaliza la salida con un salto de línea
}

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_inter(argv[1], argv[2]); // Llama a la función principal con las dos cadenas
    else
        write(1, "\n", 1); // Manejo de caso especial cuando hay un número incorrecto de argumentos
    return (0);
}
int main(int argc, char *argv[])
{
    size_t i;
    size_t j;
    
    i = 0;
    j = 0;
    
    if (argc == 3)
    {
        while(argv[1][i])
        {
            if(argv[1][i] == argv[2][j])
            {
                write(1, &argv[1][i], 1);
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}