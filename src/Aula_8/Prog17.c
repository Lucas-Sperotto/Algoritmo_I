/* Prog17.c */
/* Mostra o uso de vari�veis externas */
#include <stdio.h>
#include <stdlib.h>

int i; /* Vari�vel externa. Inicializada com zero */
int j=234; /* Vari�vel externa. Inicializada com 234 */

void func(void);/* Prot�tipo */

int main()
{
    printf("%d\t%d\n", i, j);
    func();
    printf("%d\t%d\n", i, j);
    system("PAUSE");
    return 0;
}

void func()
{
    i=25;
    j=48;
}
