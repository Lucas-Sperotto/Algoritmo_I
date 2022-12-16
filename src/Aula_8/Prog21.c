/* Prog21.c */
/* Mostra o uso de variáveis estáticas externas */
#include <stdio.h>
#include <stdlib.h>

unsigned randn(void); /* Protótipo */
void inits(int n); /* Protótipo */
int main()
{
    int i;
    int s;
    printf("Digite a sua semente: ");
    scanf("%d", &s);

    inits(s); /* inicializa semente */

    for(i=0; i < 5 ; i++)
        printf("%d\n", randn());
    system("PAUSE");
    return 0;
}
static int semente; /* Variável estática externa */


/* randn() */
/* Gera números aleatórios */
unsigned randn()
{
    static unsigned semente = 1;
    semente=(semente*25173 + 13849)%65536;/* Fórmula mágica */
    return semente;
}
/* inits() */
/* Inicializa a semente */
void inits(int n)
{
    semente=n;
}
