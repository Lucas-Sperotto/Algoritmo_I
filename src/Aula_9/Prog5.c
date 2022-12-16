/* NotasF1.C */
/* Calcula a média das notas de qualquer número de alunos */
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

    i--; /* remove o item de término */

    for(j=0 ; j < i ; j++)
        media += notas[j];

    media /= i;
    printf("Média das notas: %.2f\n", media);

    system("PAUSE");
    return 0;
}

