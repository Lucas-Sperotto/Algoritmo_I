#include <stdio.h>

int main()
{
    int i;
    char nome[50] ;
    float media = 0.0, nota;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    for(i = 1; i <= 3; i++)
    {
        printf("Digite a nota [%d]: ", i);
        scanf("%f", &nota);
        media += nota;//media = media + numero;
    }
    media /= 3.0;// media = media / 3.0

    printf("A média do aluno %s e: %f", nome, media);

    return 0;
}
