#include <stdio.h>

float vf(float);

int main()
{
    float t;

    printf("Digite o tempo: ");
    scanf("%f", &t);

    printf("Velocidade Final: %f", vf(t));

    return 0;
}

float vf(float t)
{
    return 9.8 * t;
}
