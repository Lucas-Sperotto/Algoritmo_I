/* NotasF1.C */
/* Calcula a m�dia das notas de qualquer n�mero de alunos */
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

int main()
{

    float notas[TAMANHO] , media=0.0;
    int i=0,j;

    do
    {
        if(i >= TAMANHO)
        {
            printf("BUFFER LOTADO.\n");
            i++;
            break;
        }
        printf("Digite a nota do aluno %d ", i+1);
        scanf("%f",&notas[i]);
    }
    while( notas[i++] >= 0.0);

    i--; /* remove o item de t�rmino */

    for(j=0 ; j < i ; j++)
        media += notas[j];

    media /= i;
    printf("M�dia das notas: %.2f\n", media);

    system("PAUSE");
    return 0;
}

