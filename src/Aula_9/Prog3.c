/* NotasF.C */
/* Calcula a m�dia das notas de 5 alunos usando matriz float */
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5 /* n�o podemos usar const */

int main()
{

    float notas[TAMANHO] , media=0.0;
    int i;

    for( i=0 ; i < TAMANHO ; i++ )
    {
        printf("Digite a nota do aluno %d ", i+1);
        scanf("%f",&notas[i]);
        media += notas[i];
    }
    media /= (float)TAMANHO;
    printf("M�dia das notas: %.2f\n", media);

    system("PAUSE");
    return 0;
}
