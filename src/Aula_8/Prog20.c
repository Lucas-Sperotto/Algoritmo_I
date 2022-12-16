/* Prog20.c */
/* Mostra o uso de vari�veis static */
#include <stdio.h>
#include <stdlib.h>

unsigned randn(void); /* Prot�tipo */

int main()
{
    int i;
    for(i=0; i < 5 ; i++)
        printf("%d\n", randn());
    system("PAUSE");
    return 0;
}

/* randn() */
/* Gera n�meros aleat�rios */
unsigned randn()
{
    static unsigned semente = 1;
    semente=(semente*25173 + 13849)%65536;/* F�rmula m�gica */
    return semente;
}

