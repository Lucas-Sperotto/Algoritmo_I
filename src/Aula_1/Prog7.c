/* Prog7.cpp
 * Mostra o modificador unsigned
 */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    unsigned j = 4294967000UL;
    int i = j;

    printf("\nVari�vel unsigned = %u", j);
    printf("\nVari�vel int = %d\n", i);

    system("PAUSE");
    return 0;
}
