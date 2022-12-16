/* Prog20.c */
/* Mostra o uso de variáveis static */
#include <stdio.h>
#include <stdlib.h>

unsigned randn(void); /* Protótipo */

int main()
{
    int i;
    for(i=0; i < 5 ; i++)
        printf("%d\n", randn());
    system("PAUSE");
    return 0;
}

/* randn() */
/* Gera números aleatórios */
unsigned randn()
{
    static unsigned semente = 1;
    semente=(semente*25173 + 13849)%65536;/* Fórmula mágica */
    return semente;
}

