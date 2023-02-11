#include <stdio.h>

int main()
{
    float distancia, combustivel;
    float consumo;

    printf("Digite a distancia percorrida: ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de combustivel: ");
    scanf("%f", &combustivel);

    consumo = combustivel / distancia;

    printf("Consumo: %f", consumo);

    return 0;
}
