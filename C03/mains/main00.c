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
    printf("--- datos previos a la ejecución de ft_strcmp y strcmp ---")
    printf("s1: %s\n", ps1);
    printf("s2: %s\n", ps2);
    res = ft_strcmp(ps1, ps2);
    res2 = strcmp(ps1, ps2);
    printf("--- tras la ejecución de ft_strcmp y strcmp ---")
    printf("restultado ft_strcmp: %d\n", res);
    printf("restultado strcmp: %d\n", res2);
}