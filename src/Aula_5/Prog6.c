/* Prog6.c */
/* Mostra o uso de uma vari�vel do tipo char para controle do la�o for
 * Imprime as letras min�sculas e seus correspondentes valores
 * em decimal na tabela ASCII */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    char ch;
    for(ch = 'a'; ch <= 'z'; ch++)
        printf("\nO valor ASCII de %c � %d", ch, ch);

    printf("\n");
    //system("PAUSE");
    return 0;
}


