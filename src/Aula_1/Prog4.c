/* Prog4.c */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "portuguese-brazilian"); /* Configura o idioma portugues */
    printf("A letra %c", 'J');
    printf(" pronuncia-se %s%c%c", "Jota", '.', '\n');

    system("PAUSE");
    return 0;
}
