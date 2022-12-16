/* Prog9.c */
/* calcula a area da esfera */
#include <stdio.h>
#include <stdlib.h>

const float PI = 3.14159;

float area(float r)
{
    return(4.0 * PI * r * r);
}



//; /* protótipo */

int main()
{
    float raio;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    printf("A area da esfera e' %.2f\n", area(raio));
    //system("PAUSE");
    return 0;
}
/* area() */
/* retorna a area da esfera */
//float area(float r) /* definicao da funcao */
//{
//    return(4.0 * PI * r * r);
//}
