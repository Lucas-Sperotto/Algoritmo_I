/* Loteria.C */
/* Imprime 50 combina��es de jogos para a Sena */
#include <stdio.h>
#include <stdlib.h>
#define JOGOS 50
#define N 6

int main()
{
    int matriz[JOGOS][N], k, j;

    for(k = 0; k < JOGOS; k++)
        for(j = 0 ; j < N; j++)
            matriz[k][j] = rand() % 60 + 1;/*gera n�m. aleat�rio de 1 a 60*/

    for(k = 0; k < JOGOS; k++)
    {
        printf("Combinacao %2d:    ", k + 1);
        for(j = 0; j < N; j++)/* Imprime as dezenas na tela*/
            printf("%2d   ",matriz[k][j]);
        printf("\n");
    }
    system("PAUSE");
    return 0;
}
