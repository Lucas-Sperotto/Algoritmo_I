/* Prog2.c */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "portuguese-brazilian"); /* Configura o idioma portugues */
    printf("Este é o número %d.\n", 5 );
    //printf("Este é o número %E.\n", 5000000.1 );
    return 0;
}
