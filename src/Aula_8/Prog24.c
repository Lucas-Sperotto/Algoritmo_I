/* Prog24.c */
/* Mostra o conflito entre nomes de vari�veis */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int K = 5; /* PRIMEIRA VARIAVEL K */
    printf("Em main()  - endere�o de K = %u\n", &K);
    printf("Em main()  - valor    de K = %d\n",K);
    if(K == 5)
    {
        int K = 2; /* SEGUNDA VARIAVEL */
        printf("No bloco   - endere�o de K = %u\n", &K);
        printf("No bloco   - valor    de K = %d\n",K);
    }
    printf("Fora do bloco - valor de K = %d\n",K);
    system("PAUSE");
    return 0;
}

