/* Notas.C */
/* Calcula a média de 5 notas (não usa matriz) */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota0, nota1, nota2, nota3, nota4;
    float media = 0.0;

    printf("Digite a nota do aluno 1 ");
    scanf("%d", &nota0);
    printf("Digite a nota do aluno 2 ");
    scanf("%d", &nota1);
    printf("Digite a nota do aluno 3 ");
    scanf("%d", &nota2);
    printf("Digite a nota do aluno 4 ");
    scanf("%d", &nota3);
    printf("Digite a nota do aluno 5 ");
    scanf("%d", &nota4);

    media =(nota0 + nota1 + nota2 + nota3 + nota4) / 5.0;
    printf("Média das notas: %.2f\n", media);

    system("PAUSE");
    return 0;
}
