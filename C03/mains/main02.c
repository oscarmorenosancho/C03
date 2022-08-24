/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:41:17 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/24 17:42:13 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strcat(char *dest, char *src);

int main(int argc, char **argv)
{
    char    dest1[50] = "Cadena 1";
    char    dest2[50] = "Cadena 1";
    char    src[50] = "/Cadena 2";
    char    *ret1;
    char    *ret2;
    char    coinc[] = "coincide";
    char    no_coinc[] = "NO coincide";

    if (argc > 2)
    {
        strcpy (src, argv[1]);
        strcpy (dest1, argv[2]);
        strcpy (dest2, argv[2]);
    }
    printf("--- datos previos a la ejecución de ft_strcat y strcat ---\n");
    printf("source: %s\n", src);
    printf("dest ft_strcat: %s\n", dest1);
    printf("dest    strcat: %s\n", dest2);
    ret1 = ft_strcat(dest1, src);
    ret2 = strcat(dest2, src);
    printf("--- tras la ejecución de ft_strcat y strcat ---\n");
    printf("dest     ft_strcat: %s\n", dest1);
    printf("retorno  ft_strcat: %s, %s con dest\n", ret1, (ret1 == dest1)?coinc:no_coinc);
    printf("dest     strcat: %s\n", dest2);
    printf("retorno  strcat: %s, %s con dest\n", ret2, (ret2 == dest2)?coinc:no_coinc);
    printf("destino de ft_strcat %s con destino de strcat", (strcmp(dest1, dest2) ==0)?coinc:no_coinc);
}
