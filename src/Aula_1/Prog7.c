/* Prog7.c
 * Mostra o modificador unsigned
 */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "portuguese-brazilian"); /* Configura o idioma portugues */
    unsigned j = 4294967000UL;
    int i = j;

    printf("\nVariável unsigned = %u", j);
    printf("\nVariável int = %d\n", i);

    system("PAUSE");
    return 0;
}
