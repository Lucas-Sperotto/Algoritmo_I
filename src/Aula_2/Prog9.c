/* Prog9.c */
/* Mostra o uso de const para declarar constates*/
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    const char Bip = '\a'; /*declara��o de constante*/
    const double Pi = 3.141592;/*declara��o de constante*/
    double raio, area;

    printf("\nDigite o raio da esfera: ") ;
    scanf("%lf", &raio);

    area = 4.0 * Pi * raio * raio;

    printf("%c%c", Bip, Bip);

    printf("\nArea da esfera = %.2lf\n", area);
    //system("PAUSE");
    return 0;
}
