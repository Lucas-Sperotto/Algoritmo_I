#include <stdio.h>

void intervalo(int);

int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    intervalo(n);

    return 0;
}

void intervalo(int n)
{
    if ((n > 100) & (n < 200))
    {
        printf("O numero %d pertence ao intervalo entre 100 e 200", n);
    }
    else
    {
        printf("O numero %d nao pertence ao intervalo entre 100 e 200", n);
    }
}
