#include <stdio.h>

void aumento(float);

int main()
{
    float salario;

    printf("Digite o valor do sal�rio: ");
    scanf("%f", &salario);

    aumento(salario);

    return 0;
}

void aumento(float salario)
{
    if ((salario > 0) & (salario <= 1000))
    {
        printf("O salario com 10%% de aumento e: %f", (salario * 1.1));
    }
    else
    {
        printf("O salario n�o permite aumento");
    }
}
