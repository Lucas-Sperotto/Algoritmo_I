#include <stdio.h>

void menor(int, int);

int main()
{
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    menor(a, b);

    return 0;
}

void menor(int a, int b)
{
    if(a < b)
    {
        printf("menor e %d", a);
    }
    else
    {
        printf("menor e %d", b);
    }
}

