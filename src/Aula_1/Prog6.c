/*Prog6.c
 *Mostra inicializa��o de vari�veis
 */
#include <stdio.h> /* para printf() */
#include <stdlib.h> /* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int evento = 5;	/* define evento inicializada com 5     */
    char corrida = 'C'; /* define corrida inicializada com C  */
    float tempo = 27.25;/* define tempo inicializada com 27.25*/

    printf("\nO tempo vitorioso na eliminat�ria %c", corrida);
    printf("\nda competi��o %d foi %f2.1.\n", evento, tempo);

    system("PAUSE");
    return 0;
}
