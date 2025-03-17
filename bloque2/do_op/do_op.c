/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:04:06 by mconde-s          #+#    #+#             */
/*   Updated: 2025/02/27 20:10:43 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        printf("\n");
        return 0;
    }

    int result;
    int n1;
    int n2;
    char oper;

    n1 = atoi(argv[1]);
    n2 = atoi(argv[3]);
    oper = argv[2][0];
    int err = 0;
    
    if(oper == '+')
        result = n1 + n2;
    else if(oper == '-')
        result = n1 - n2;
    else if(oper == '/')
        result = n1 / n2;
    else if(oper == '*')
        result = n1 * n2;
    else if(oper == '%')
        result = n1 % n2;
    else
        err = 1;
    if (!err)
        printf("%d", result);
    printf("\n");
    return(0);
}