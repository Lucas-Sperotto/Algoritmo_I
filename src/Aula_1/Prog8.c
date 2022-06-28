/* Prog8.cpp
 * Mostra a impressão de %
 */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int reajuste = 10;

    printf("O reajuste foi de %d%%.\n", reajuste);

    system("PAUSE");
    return 0;
}
