/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:44:23 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/26 13:48:28 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2);

int main(int argc, char **argv)
{
    char    s1[50] = "Cadena 1";
    char    s2[50] = "Cadena 2";
    int     res;
    int     res2;
    char    *ps1;
    char    *ps2;

    if (argc > 2)
    {
        ps1 = argv[1];
        ps2 = argv[2];
    }
    else
    {
        ps1 = s1;
        ps2 = s2;
    }
    printf("--- datos previos a la ejecución de ft_strcmp y strcmp ---\n");
    printf("s1: %s\n", ps1);
    printf("s2: %s\n", ps2);
    res = ft_strcmp(ps1, ps2);
    res2 = strcmp(ps1, ps2);
    printf("--- tras la ejecución de ft_strcmp y strcmp ---\n");
    printf("restultado ft_strcmp: %d\n", res);
    printf("restultado strcmp: %d\n", res2);
	return (0);
}
