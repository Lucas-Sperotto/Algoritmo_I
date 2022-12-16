/* Notas.C */
/* Calcula a média de 5 notas (usa matriz) */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int notas[5];
    int i;
    float media = 0.0;

    for(i = 0 ; i < 5 ; i++ )
    {
        printf("Digite a nota do aluno %d ", i + 1);
        scanf("%d", &notas[i]);
        media += notas[i];
    }

    media /= 5.0;
    printf("Média das notas: %.2f\n", media);

    system("PAUSE");
    return 0;
}
