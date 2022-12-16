/* Prog19.c */
/* Mostra o uso de variáveis estáticas */
#include <stdio.h>
#include <stdlib.h>

int soma(void); /* Protótipo */

int main()
{
    printf("%d\n", soma() );
    printf("%d\n", soma() );
    printf("%d\n", soma() );
    system("PAUSE");
    return 0;
}
/* soma() */
/* usa variável static */
int soma()
{
    static int k;
    k++;
    return k;
}
