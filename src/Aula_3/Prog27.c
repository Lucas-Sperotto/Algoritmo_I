/* Prog27.c */
/* Mostra operações com operadores lógicos */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int i, j;

    printf("Digite 0 ou 1 para o primeiro numero: ");
    scanf("%d",&i);
    printf("Digite 0 ou 1 para o segundo numero: ");
    scanf("%d",&j);

    printf("\n%d && %d: %d\n", i, j, i&&j);
    printf("%d || %d: %d\n", i, j, i||j);
    printf("! %d: %d\n", i, !i);
    printf("! %d: %d\n", j, !j);

    return 0;
}
