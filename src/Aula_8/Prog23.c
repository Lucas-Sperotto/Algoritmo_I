/* Prog23.c */
/* Mostra o conflito entre nomes de vari�veis */
#include <stdio.h>
#include <stdlib.h>

void func1(int); /* prot�tipo */

int main()
{
    int K = 5; /* PRIMEIRA VARIAVEL K */
    printf("Em main()  - endere�o de K = %u\n", &K);
    func1(K);
    printf("Em main()  - valor    de K = %d\n",K);
    system("PAUSE");
    return 0;
}

void func1(int K) /* SEGUNDA VARIAVEL */
{
    K = K + 2;
    printf("Em func1() - endere�o de K = %u\n",&K);
    printf("Em func1() - valor    de K = %d\n",K);
}
