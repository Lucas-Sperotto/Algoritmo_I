/* Prog23.c */
/* Mostra operadores aritméticos de atribuição */
/* Calcula a média aritmética de 4 notas */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    float nota, media = 0.0;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota);
    media += nota;  /// => media = media + nota;

    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota);
    media += nota;

    printf("\nDigite a terceira nota: ");
    scanf("%f", &nota);
    media += nota;

    printf("\nDigite a quarta nota: ");
    scanf("%f", &nota);
    media += nota;

    media /= 4.0; /// => media = media / 4.0;
    printf("\nMÉDIA: %.2f\n", media);
    //system("PAUSE");
    return 0;

}
