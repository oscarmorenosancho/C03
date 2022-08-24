#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main(int argc, char **argv)
{
    char            s1[50] = "Cadena 1";
    char            s2[50] = "Cadena 2";
    int             sn;
    unsigned int    n;
    int             res;
    int             res2;
    char            *ps1;
    char            *ps2;

    ps1 = s1;
    ps2 = s2;
    n = 8;
    if (argc > 2)
    {
        ps1 = argv[1];
        ps2 = argv[2];
    }
    if (argc > 3)
    {
        sn = atoi(argv[3]);
        if (sn < 0)
            sn = 0;
        n = (unsigned int) sn;
    }
    printf("--- datos previos a la ejecución de ft_strncmp y strncmp ---")
    printf("s1: %s\n", ps1);
    printf("s2: %s\n", ps2);
    printf("longitud a compararar: %u", n);
    res = ft_strncmp(ps1, ps2, n);
    res2 = strncmp(ps1, ps2, n);
    printf("--- tras la ejecución de ft_strncmp y strncmp ---")
    printf("restultado ft_strncmp: %d\n", res);
    printf("restultado strncmp: %d\n", res2);
}