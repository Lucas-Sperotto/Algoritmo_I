#include <stdio.h>

float dif(float[]);

int main()
{
    float a[2];//float a, b;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a[0]);
    printf("Digite o segundo numero: ");
    scanf("%f", &a[1]);

    printf("a diferenca e: %f", dif(a));

    return 0;
}

float dif(float a[])
{
    return (a[0] - a[1]);
}

