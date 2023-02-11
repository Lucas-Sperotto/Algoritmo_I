#include <stdio.h>

int main()
{

//float valor1 = 0.25, valor2 = 0.20;
    int n_copias;
    float valor_final;

    printf("Digite o numero de copias: ");
    scanf("%d", &n_copias);

    if(n_copias >= 100)
    {
        valor_final = n_copias * 0.20;
    }
    else
    {
        valor_final = n_copias * 0.25;
    }
    printf("O valor total e: %f", valor_final);
    return 0;
}
