/* Prog14.c */
/* Mostra a fun��o getchar() */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
//#include <conio.h>	/* para getche() e getch() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    char ch;
    printf("\nPressione uma tecla ");
    ch = getchar();	/* aguarda uma tecla no teclado */
    printf("\nA tecla sucessora ASCII � %c.\n", ch + 1);
//    system("PAUSE");
    return 0;
}
