/* Prog1.c */
/* Mostra um uso simples do laço for */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int i;
    for(i = 0; i < 20; i++) /* Imprime 20 *  */
        printf("%c", '*');

    printf("\n");
    //system("PAUSE");
    return 0;
}
