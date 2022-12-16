/* Prog1.c */
/* Mostra a escrita da fun��o celsius() */
#include <stdio.h>
#include <stdlib.h>

float celsius(float);	/* Prot�tipo ou declara��o da fun��o */

int main()
{
    float c, f;
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &f);

    c = celsius(f); 	/* Chamada � fun��o */

    printf("Celsius = %.2f\n", c);

    //system("PAUSE");
    return 0;
}

/* celsius() */
/* Defini��o da fun��o */
float celsius( float fahr)
{
    float c;
    c = (fahr - 32.0) * 5.0/9.0;
    return c;
}
