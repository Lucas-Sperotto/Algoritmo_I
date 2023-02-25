#include <stdio.h>

float cubo(float);

int main()
{
    float a;

    printf("Digite um numero: ");
    scanf("%f", &a);

    printf("o cubo de %f e %f", a, cubo(a));

    return 0;
}

float cubo(float a)
{
    return a * a * a;
}
