/* Prog5.c */
/* Mostra o uso do operador vírgula no laço for */
/* Imprime os números de 0 a 98 de 2 em 2 */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int i, j;
    for(i = 0, j = i; (i + j) < 100; i++, j++)
        printf("%d ", i + j);

    printf("\n");
    //system("PAUSE");
    return 0;
}

