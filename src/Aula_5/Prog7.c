/*Prog7.c */
/*Desenha um tabuleiro de xadrez */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
//#include <locale.h> /* para setlocale() */

int main()
{
    //setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int lin, col, r;
    system("cls");/* Limpa a tela */
    for(lin = 1; lin <= 8; lin++)
    {
        for(r = 0; r < 2; r++)
        {
            for(col = 1; col <= 8; col++)
                if((lin + col) % 2 == 0)	/* é número par? */
                    printf("\xdb\xdb\xdb\xdb");
                else
                    printf("    ");
            printf("\n");
        }
    }
    return 0;
}
