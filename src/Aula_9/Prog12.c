/* Histograma.C */
/* Mostra matriz de duas dimensões como argumento de função */
#include <stdio.h>
#include <stdlib.h>
#define MES 3
#define FUNC 5

void histograma(int[][MES], int);/* protótipo */

int main()
{
    int pecas[FUNC][MES], i, j;

    for(i = 0; i < FUNC; i++)
        for(j = 0; j < MES; j++)
        {
            printf("Funcionário: %d\tmês %d: ", (i + 1), (j + 1));
            scanf("%d", &pecas[i][j]);
        }
    histograma(pecas,FUNC);
    system("PAUSE");
    return 0;
}
/* Imprime um histograma horizontal */
void histograma(int pecas[][MES], int nfunc)
{
    const float MAXBARRA = 50.0;
    int max = 0, temp = 0, i, j, tam;

    for(i = 0; i < nfunc; i++)
    {
        for(j = 0; j < MES ; j++)
            temp += pecas[i][j];
        if(max < temp)	max = temp;
    }

    temp = 0;
    for(i = 0; i < nfunc; i++)
    {
        for(j = 0; j < MES; j++) temp += pecas[i][j];
        printf("%2d - %5d:", (i + 1), temp);

        tam = ((int)(((float)temp) / ((float)max) * MAXBARRA));

        for(j = 0; j < tam; j++) printf("*");
        printf("\n");
    }
}
