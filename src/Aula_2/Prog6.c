/* Prog6.c */
/* Converte temperaturas de graus Celsius para Fahrenheit */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    float ctemp;

    printf("Digite temperatura em graus Celsius: ");
    scanf("%f", &ctemp);

    printf("\nTemperatura em graus Fahrenheit é %.2f\n",
           ctemp * 9 / 5 + 32);

    //system("PAUSE");
    return 0;
}
