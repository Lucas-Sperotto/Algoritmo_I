#include <stdio.h>

int main()
{
   float t, vf;

    printf("Digite o tempo: ");
    scanf("%f", &t);

    vf = 9.8 * t;

   printf("Velocidade Final: %f", vf);

    return 0;
}
