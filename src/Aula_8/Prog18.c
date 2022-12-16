/* Prog18.c */
/* Mostra o uso de variáveis externas */
#include <stdio.h>
#include <stdlib.h>

int i; /* Variável externa. Inicializada com zero */
int j=234; /* Variável externa. Inicializada com 234 */

int main()
{
    int i=5, j=10; 	/* Variáveis automáticas */
    printf("%d\t%d\n", i, j);
    system("PAUSE");
    return 0;
}

