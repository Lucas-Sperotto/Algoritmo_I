/* Prog3.c */
/* Imprime a tabuada do 6 invertida */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int i;
    for(i = 10; i > 0; i--)
        printf("\n%4d x 6 = %4d", i, i * 6);

    printf("\n");
    //system("PAUSE");
    return 0;
}
