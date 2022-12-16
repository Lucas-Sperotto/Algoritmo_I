/* Prog26.c */
/* Mostra o uso da diretiva #define */
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

float area(float); /* protótipo */

int main()
{
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f",&raio);
    printf("A area da esfera e' %.2f\n",area(raio));
    system("PAUSE");
    return 0;
}
/* area() */
/* retorna a area da esfera */
float area(float r) /* definicao da funcao */
{
    return( 4 * PI * r * r);
}
