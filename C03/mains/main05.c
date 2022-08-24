#include<stdio.h>
#include<string.h>

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);

int main(int argc, char **argv)
{
    char           dest1[50] = "Cadena 1";
    char           dest2[50] = "Cadena 1";
    char           src[50] = "/Cadena 2";
    char           *ret1;
    char           *ret2;
    char           coinc[] = "coincide";
    char           no_coinc[] = "NO coincide";
    int            ssize;
    unsigned int   size;

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
    printf("--- datos previos a la ejecución de ft_strlcat y strlcat ---")
    printf("source: %s\n", src);
    printf("dest ft_strlcat: %s\n", dest1);
    printf("dest    strlcat: %s\n", dest2);
    printf("longitud máxima del destino: %u\n", size);
    ret1 = ft_strlcat(dest1, src, size);
    ret2 = strlcat(dest2, src, size);
    printf("--- tras la ejecución de ft_strlcat y strlcat ---")
    printf("dest     ft_strlcat: %s\n", dest1);
    printf("retorno  ft_strlcat: %s, %s con dest\n", ret1, (ret1 == dest1)?coinc:no_coinc);
    printf("dest        strlcat: %s\n", dest2);
    printf("retorno     strlcat: %s, %s con dest%s\n", ret2, (ret2 == dest2)?coinc:no_coinc);
    printf("destino de ft_strlcat %s con destino de strlcat", (strcmp(dest1, dest2) ==0)?coinc:no_coinc);
}