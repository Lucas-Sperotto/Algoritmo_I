#include <stdio.h>

int main()
{
    float raio, area;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    if (raio < 0)
    {
        printf("Raio n�o pode ser negativo");
    }
    else
    {
        area = 3.14 * raio * raio;
        printf("A area �: %f", area);
    }
    return 0;
}
