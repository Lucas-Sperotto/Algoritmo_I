/* Prog29.c */
/* Mostra o uso de macros que chamam outras macros */
#include <stdio.h>
#include <stdlib.h>

#define PI			3.1416
#define SQR(x)		((x)*(x))
#define AREA(x)	((4)*(PI)* SQR(x))

int main()
{
    float raio;

    printf("Digite o raio de uma esfera:");
    scanf("%f", &raio);
    printf("A área da esfera é %f.\n", AREA(raio));

    system("PAUSE");
    return 0;
}
