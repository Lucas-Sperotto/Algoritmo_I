/* Prog25.c */
/* Mostra Vari�veis de mesmo nome */
#include <stdio.h>
#include <stdlib.h>

void func(void); /* prot�tipo */

int K = 5; /* PRIMEIRA VARIAVEL K */

int main()
{
    int K = 10; /* SEGUNDA VARIAVEL */
    printf("Em main()  - valor    de K = %d\n",K);
    func();

    system("PAUSE");
    return 0;
}

void func()
{
    printf("Em func()  - valor    de K = %d\n",K);
}
