/* Prog10.C */
/* Mostra a passagem de matrizes para fun��es como argumento */
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 50

float media(float[], int); /*Prot�tipo*/

int main()
{
    float notas[TAMANHO], m;
    int i = 0;

    do
    {
        printf("Digite a nota do aluno %d ", (i + 1));
        scanf("%f", &notas[i]);
    }
    while( notas[i++] >= 0.0);

    i--; /* remove o item de t�rmino */

    m = media(notas, i);

    printf("M�dia das notas: %.2f\n", media);

    system("PAUSE");
    return 0;
}

float media(float lista[], int tamanho)
{
    int i;
    float m = 0.0;
    for(i = 0 ; i < tamanho ; i++) m += lista[i];
    return m / tamanho;
}
