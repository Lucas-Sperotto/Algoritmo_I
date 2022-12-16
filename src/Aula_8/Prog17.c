/* Prog17.c */
/* Mostra o uso de variáveis externas */
#include <stdio.h>
#include <stdlib.h>

int i; /* Variável externa. Inicializada com zero */
int j=234; /* Variável externa. Inicializada com 234 */

void func(void);/* Protótipo */

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
