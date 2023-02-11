#include <stdio.h>

int main()
{
    float raio, area;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    if (raio < 0)
    {
        printf("Raio não pode ser negativo");
    }
    else
    {
        area = 3.14 * raio * raio;
        printf("A area é: %f", area);
    }
    return 0;
}
