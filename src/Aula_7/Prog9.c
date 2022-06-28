/*Prog9.c */
/*Desenha uma linha diagonal na tela */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
//#include <locale.h> /* para setlocale() */

int main()
{
    //setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int lin, col;
    for(lin = 1; lin < 25; lin++)/* passo da descida */
    {
        for(col = 1; col < 25; col++)/* passo da largura */
            if(lin == col) /* estamos na diagonal ? */
                printf("\xDB");//printf("\xDB\xDB"); /* sim, desenha bloco escuro */
            else
                printf("\xB0");//printf("\xB0\xB0");/* não, desenha bloco claro */
        printf("\n");/* pula de linha */
    }
    // system("PAUSE");
    return 0;
}
