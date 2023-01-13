#include <stdio.h>
int main()
{
    float raio, altura, volume;
    printf("\nDigite o raio do cilindro: ");
    scanf("%f", &raio);
    printf("\nDigite a altura do cilindro: ");
    scanf("%f", &altura);

    volume = 3.1416 * raio * raio * altura;

    printf("\nO volume é: %f\n", volume);
    return 0;
}
