/*Prog11.c */
/*Desenha duas linhas diagonais cruzadas usando ou lógico */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
//#include <locale.h> /* para setlocale() */

int main()
{
    //setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int lin, col;
    for(lin = 1; lin < 26; lin++)/* passo da descida */
    {
        for(col = 1; col < 26; col++)/* passo da largura */
            if(lin == col || col == (26 - lin))/*estamos na diagonal 1 ou 2 ? */
                printf("\xDB"); /* sim, desenha bloco escuro */
            else
                printf("\xB0");/* não, desenha bloco claro */
        printf("\n");/* pula de linha */
    }
    // system("PAUSE");
    return 0;
}
