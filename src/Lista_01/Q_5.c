#include <stdio.h>
int main()
{
    float nota_1, nota_2, nota_3, nota_total;
    float valor_total = 780000.00;
    float valor_1, valor_2, valor_3;

    printf("\nDigite o valor da nota 1: ");
    scanf("%f", &nota_1);
    printf("\nDigite o valor da nota 2: ");
    scanf("%f", &nota_2);
    printf("\nDigite o valor da nota 3: ");
    scanf("%f", &nota_3);

    nota_total = nota_1 + nota_2 + nota_3;

    valor_1 = (valor_total / nota_total) * nota_1;
    valor_2 = (valor_total / nota_total) * nota_2;
    valor_3 = (valor_total / nota_total) * nota_3;

    printf("\nValor 1: %f\n", valor_1);
    printf("\nValor 2: %f\n", valor_2);
    printf("\nValor 3: %f\n", valor_3);
    return 0;
}

