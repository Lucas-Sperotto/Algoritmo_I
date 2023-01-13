#include <stdio.h>
int main()
{
    float latao;
    float cobre, zinco;

    printf("\nDigite a quantidade de latão: ");
    scanf("%f", &latao);

    cobre = (latao / 10.0) * 7.0;
    zinco = (latao / 10.0) * 3.0;

    printf("\nCobre: %f\n", cobre);
    printf("\nZinco: %f\n", zinco);
    return 0;
}

