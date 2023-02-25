#include <stdio.h>

void maior(int, int);

int main()
{
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    maior(a, b);

    return 0;
}

void maior(int a, int b)
{
    if(a > b)
    {
        printf("maior e %d", a);
    }
    else
    {
        printf("maior e %d", b);
    }
}

