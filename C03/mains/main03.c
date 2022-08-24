/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:41:32 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/24 17:49:07 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(int argc, char **argv)
{
    char           dest1[50] = "Cadena 1";
    char           dest2[50] = "Cadena 1";
    char           src[50] = "/Cadena 2";
    char           *ret1;
    char           *ret2;
    char           coinc[] = "coincide";
    char           no_coinc[] = "NO coincide";
    int            snb;
    unsigned int   nb;

    nb = 8;
    if (argc > 2)
    {
        strcpy (src, argv[1]);
        strcpy (dest1, argv[2]);
        strcpy (dest2, argv[2]);
    }
    if (argc > 3)
    {
        snb = atoi(argv[3]);
        if (snb < 0)
            snb = 0;
        nb = (unsigned int) snb;
    }    
    printf("--- datos previos a la ejecución de ft_strncat y strncat ---\n");
    printf("source: %s\n", src);
    printf("dest ft_strncat: %s\n", dest1);
    printf("dest    strncat: %s\n", dest2);
    printf("longitud de source a concatenar: %u\n", nb);
    ret1 = ft_strncat(dest1, src, nb);
    ret2 = strncat(dest2, src, nb);
    printf("--- tras la ejecución de ft_strncat y strncat ---\n");
    printf("dest     ft_strncat: %s\n", dest1);
    printf("retorno  ft_strncat: %s, %s con dest\n", ret1, (ret1 == dest1)?coinc:no_coinc);
    printf("dest        strncat: %s\n", dest2);
    printf("retorno     strncat: %s, %s con dest\n", ret2, (ret2 == dest2)?coinc:no_coinc);
    printf("destino de ft_strncat %s con destino de strncat", (strcmp(dest1, dest2) ==0)?coinc:no_coinc);
}
