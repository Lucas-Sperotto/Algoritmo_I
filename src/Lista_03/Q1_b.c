#include <stdio.h>

float div(float, float);

int main()
{
    float a, b;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    printf("a divisao e: %f", div(a, b));

    return 0;
}

float div(float a, float b)
{
    if(b == 0)
    {
        printf("divisao invalida");
        return 0;
    }
    else
    {
        return (a / b);
    }
}

