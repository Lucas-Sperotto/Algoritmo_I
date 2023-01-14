#include <stdio.h>
int main()
{
    int n_dias_trab;
    float v_liquido, diaria = 20.0, ISS = 0.08;

    printf("\nDigite o numero de dias: ");
    scanf("%d", &n_dias_trab);

    v_liquido = (1.0 - ISS) * diaria * (float)n_dias_trab;

    printf("\nValor Liquido: %f\n", v_liquido);
    return 0;
}
