#include <stdio.h>
int main()
{
    int N_patas, N_Cab, N_patos, N_coelhos;
    printf("\nDigite a quantidade de patas: ");
    scanf("%d", &N_patas);
    printf("\nDigite a quantidade de cabeças: ");
    scanf("%d", &N_Cab);

    N_coelhos = (N_patas - 2 * N_Cab) / 2;

    N_patos = N_Cab - N_coelhos;

    printf("\nPatos: %d\n", N_patos);
    printf("\nCoelhos: %d\n", N_coelhos);
    return 0;
}

