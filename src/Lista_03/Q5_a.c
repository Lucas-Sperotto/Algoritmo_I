#include <stdio.h>

float area(float);

int main()
{
    float raio;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    printf("A area �: %f", area(raio));
    return 0;
}

float area(float raio)
{
    if (raio < 0)
    {
        printf("Raio n�o pode ser negativo");
        return 0;
    }
    else
    {
        return 3.14 * raio * raio;
    }
}
