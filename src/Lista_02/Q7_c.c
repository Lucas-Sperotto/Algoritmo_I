#include <stdio.h>
int main()
{
    int n, negativo = 0, i;

    for(i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if (n < 0)
        {
            negativo++;
        }
    }
    printf("foram digitados %d numeros negativos.", negativo);
    return 0;
}
