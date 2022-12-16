/* Prog7.c */
/* Codifica a entrada digitada */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
#include <conio.h> /* para getch() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    unsigned char ch;
    for(ch = getch(); ch != 'X'; ch = getch())
        printf("%c ", ch + 1);

    printf("\n");
    //system("PAUSE");
    return 0;
}



