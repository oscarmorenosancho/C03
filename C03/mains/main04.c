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
    printf("--- datos previos a la ejecución de ft_strstr y strstr ---")
    printf("str: %s\n", str);
    printf("to_find: %s\n", to_find);
    ret1 = ft_strstr(str, to_find);
    ret2 = strstr(str, to_find);
    printf("--- tras la ejecución de ft_strstr y strstr ---")
    printf("restultado ft_strstr: %d\n", ret1);
    printf("restultado strstr: %d\n", ret2);
}