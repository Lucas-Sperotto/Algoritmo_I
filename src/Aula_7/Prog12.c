/* Prog12.c */
/* Centraliza um texto com moldura */
#include <stdio.h>
#include <stdlib.h>

void linha(int); /* protótipo */
void espacos(int); /* protótipo */

int main()
{
    espacos(30);
    linha(20);
    espacos(30);
    printf("\xDB UM PROGRAMA EM C \xDB\n");
    espacos(30);
    linha(20);
    //system("PAUSE");
    return 0;
}
/* linha() */
/* desenha uma linha solida na tela, n caracteres */
void linha(int n)
{
    int j;
    for(j = 1; j <= n; j++)
        printf("\xDB");
    printf("\n");
}
/* espacos() */
/* Imprime n espacos em branco */
void espacos(int n)
{
    int i;
    for(i = 0; i < n ; i++) printf(" ");
}
