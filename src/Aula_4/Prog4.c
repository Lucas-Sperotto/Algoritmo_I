/* Prog4.c */
/* Imprime os múltiplos de 3 entre 3 e 100 */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int i;
    for(i = 3; i <= 100; i += 3)// i = i + 3;
        printf("%d\t", i);

    printf("\n");
    //system("PAUSE");
    return 0;
}
