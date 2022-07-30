/* Prog3.c */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "portuguese-brazilian"); /* Configura o idioma portugues */
    printf("%s está a %d milhões de milhas\ndo sol.\n", "Venus", 67 );
    system("PAUSE");
    return 0;
}
