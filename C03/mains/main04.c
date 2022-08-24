/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:41:43 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/24 17:57:13 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find);

int main(int argc, char **argv)
{
    char    str[50] = "Cadena 1";
    char    to_find[50] = "dena";
    char    *ret1;
    char    *ret2;

    if (argc > 2)
    {
        strcpy(str, argv[1]);
        strcpy(to_find, argv[2]);
    }
    printf("--- datos previos a la ejecución de ft_strstr y strstr ---\n");
    printf("str: %s\n", str);
    printf("to_find: %s\n", to_find);
    ret1 = ft_strstr(str, to_find);
    ret2 = strstr(str, to_find);
    printf("--- tras la ejecución de ft_strstr y strstr ---\n");
    printf("restultado ft_strstr: %s\n", ret1);
    printf("restultado strstr: %s\n", ret2);
}
