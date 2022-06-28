/* Prog5.c */
/* Converte temperaturas de graus Celsius para Fahrenheit */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    float ftemp, ctemp;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &ctemp);

    ftemp = ctemp * 9.0 / 5.0 + 32.0;

    printf("\nTemperatura em graus Fahrenheit é %.2f\n", ftemp);

    // system("PAUSE");
    return 0;
}
