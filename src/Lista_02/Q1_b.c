#include <stdio.h>

int main()
{
    int idade;
    float valor_final;

    printf("Digite  idade do jogador: ");
    scanf("%d", &idade);

    if(idade <= 13)
        printf("Jogador Infantil");
    else if(idade <= 17)
        printf("Jogador Junior");
    else
        printf("Jogador Senior");
    return 0;
}
