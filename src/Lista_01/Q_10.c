#include <stdio.h>
int main()
{
    float t_C, t_F;

    printf("\nDigite a temperatura em Celcius: ");
    scanf("%f", &t_C);

    t_F = (9.0 / 5.0) * t_C + 32 ;

    printf("\nTemperatura em Farenheit: %f\n", t_F);
    return 0;
}
