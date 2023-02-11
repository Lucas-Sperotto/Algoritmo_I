#include <stdio.h>

int main()
{
    int i;
    float media = 0.0, numero;

    for(i = 1; i <= 3; i++)
    {
        printf("Digite o numero [%d]: ", i);
        scanf("%f", &numero);
        media += numero;//media = media + numero;
    }
    media /= 3.0;// media = media / 3.0

    printf("A média é: %f", media);
    return 0;
}
