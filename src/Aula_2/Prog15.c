/* Prog15.c */
/* Mostra a fun��o getchar() e putchar() */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
#include <conio.h>	/* para getche() e getch() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    char ch;
    printf("\nPressione uma tecla ");
    ch = getchar();	/* aguarda uma tecla no teclado */

    printf("\nA tecla sucessora ASCII � ");

    putchar(ch + 1);

    putchar('\n');

    //system("PAUSE");
    return 0;
}
