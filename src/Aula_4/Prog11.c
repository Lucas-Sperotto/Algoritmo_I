/* Prog11.c */
/* Imprime a tabuada do 2 ao 9 */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int i, j, k;
    system("cls");/*Limpa a tela */
    for(k = 0; k <= 1; k++)
    {
        printf("\n");
        for(i = 1; i <= 4; i++)
            printf("TABUADA DO %3d    ", i + 4 * k + 1);
        printf("\n");
        for(i = 1; i <= 9; i++)
        {
            for(j = 2 + 4 * k; j <= 5 + 4 * k; j++)
                printf("%3d x%3d = %3d    ", j, i, j * i);
            printf("\n");
        }
    }
    return 0;
}
