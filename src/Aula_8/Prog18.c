/* Prog18.c */
/* Mostra o uso de vari�veis externas */
#include <stdio.h>
#include <stdlib.h>

int i; /* Vari�vel externa. Inicializada com zero */
int j=234; /* Vari�vel externa. Inicializada com 234 */

int main()
{
    int i=5, j=10; 	/* Vari�veis autom�ticas */
    printf("%d\t%d\n", i, j);
    system("PAUSE");
    return 0;
}

