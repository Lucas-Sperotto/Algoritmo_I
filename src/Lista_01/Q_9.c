#include <stdio.h>
int main()
{
    float deposito, rendimento, i = 0.005;

    printf("\nDigite o valor do deposito: ");
    scanf("%f", &deposito);

    rendimento = deposito * i;

    printf("\nRendimento: %f\n", rendimento);
    return 0;
}
