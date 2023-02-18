#include <stdio.h>
int main()
{
    float salario, maior = 0, soma_salario = 0;
    int n_filhos, n_familias = 0, n_100 = 0, soma_filhos = 0;

    while(1)
    {
        printf("Digite o salario da familia: ");
        scanf("%f", &salario);
        if (salario < 0)
        {
            break;
        }
        printf("Digite o numero de filhos: ");
        scanf("%d", &n_filhos);
        n_familias++;

        soma_salario += salario;
        soma_filhos += n_filhos;

        if (salario > maior)
        {
            maior = salario;
        }

        if (salario <= 100)
        {
            n_100++;
        }
    }
    printf("\n\na media dos salarios e: %f\n", ((float)soma_salario/(float)n_familias));
    printf("a media dos filhos e: %f\n", ((float)soma_filhos/(float)n_familias));
    printf("o maior salario e: %f\n", maior);
    printf("o percentual de familias e: %f%%\n", (((float)n_100 * 100.0)/(float)n_familias));
    return 0;
}
