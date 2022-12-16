/* OrdenaNum.C */
/* Ordena os valores da matriz */
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 50

void ordena(int[], int);/* protótipo */

int main()
{
    int Tab[TAMANHO], i, j;

    for(i = 0; i < TAMANHO; i++)
    {
        printf("Digite número ou zero para terminar: ");
        scanf("%d", &Tab[i]);

        if( !Tab[i] ) break;
    }
    ordena(Tab, i);

    for(j = 0; j < i; j++)
        printf("%d\n", Tab[j]);
    system("PAUSE");
    return 0;
}

/* Ordena os valores da matriz */
void ordena(int lista[], int tamanho)
{
    int i, j, temp;
    for(i = 0; i < (tamanho - 1); i++)
        for(j = (i + 1); j < tamanho; j++)
            if(lista[i] > lista[j])
            {
                temp = lista[j];
                lista[j] = lista[i];
                lista[i] = temp;
            }
}

