/* Prog2.c */
/* Mostra a escrita da função celsius() */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius(float);	/* Protótipo local */
    float c, f;
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &f);

    c = celsius(f); 	/* Chamada à função */

    printf("Celsius = %.2f\n", c);

    system("PAUSE");
    return 0;
}

/* celsius() */
/* Definição da função */
float celsius( float fahr)
{
    //float c;
    //c = (fahr - 32.0) * 5.0/9.0;
    return (fahr - 32.0) * 5.0/9.0;//c;
}
