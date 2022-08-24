/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:44:05 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/24 18:17:59 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);

int main(int argc, char **argv)
{
    char			dest1[50] = "Cadena 1";
    char			dest2[50] = "Cadena 1";
    char			src[50] = "/Cadena 2";
    unsigned int	ret1;
    unsigned int 	ret2;
    char			coinc[] = "coincide";
    char			no_coinc[] = "NO coincide";
    int				ssize;
    unsigned int	size;

    size = 8;
    if (argc > 2)
    {
        strcpy (src, argv[1]);
        strcpy (dest1, argv[2]);
        strcpy (dest2, argv[2]);
    }
    if (argc > 3)
    {
        ssize = atoi(argv[3]);
        if (ssize < 0)
            ssize = 0;
        size = (unsigned int) ssize;
    }    
    printf("--- datos previos a la ejecución de ft_strlcat y strlcat ---\n");
    printf("source: %s\n", src);
    printf("dest ft_strlcat: %s\n", dest1);
    printf("dest    strlcat: %s\n", dest2);
    printf("longitud máxima del destino: %u\n", size);
    ret1 = ft_strlcat(dest1, src, size);
    ret2 = strlcat(dest2, src, size);
    printf("--- tras la ejecución de ft_strlcat y strlcat ---\n");
    printf("dest     ft_strlcat: %s\n", dest1);
    printf("retorno  ft_strlcat: %u\n", ret1);
    printf("dest        strlcat: %s\n", dest2);
    printf("retorno     strlcat: %u\n", ret2);
	printf("destinos de ft_strlcat y strlcat %s\n", (strcmp(dest1,dest2) == 0) ?coinc:no_coinc);
	printf("retorno de ft_strlcat %s con retorno de strlcat", (ret1 == ret2)?coinc:no_coinc);
}
