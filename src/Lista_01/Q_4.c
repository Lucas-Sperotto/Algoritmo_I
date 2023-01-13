#include <stdio.h>
int main()
{
    float aposta_1, aposta_2, premio;
    float premio_1, premio_2;
    float T_aposta;
    printf("\nDigite o valor da aposta 1: ");
    scanf("%f", &aposta_1);
    printf("\nDigite o valor da aposta 2: ");
    scanf("%f", &aposta_2);
    printf("\nDigite o valor do prêmio: ");
    scanf("%f", &premio);

    T_aposta = aposta_1 + aposta_2;

    premio_1 = (premio / T_aposta) * aposta_1;
    premio_2 = (premio / T_aposta) * aposta_2;

    printf("\nPremio 1: %f\n", premio_1);
    printf("\nPremio 2: %f\n", premio_2);
    return 0;
}

