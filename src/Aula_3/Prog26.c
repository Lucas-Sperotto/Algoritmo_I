/* Prog26.c */
/* Mostra opera��es com operadores l�gicos */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int i, j;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &i);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &j);

    printf("\n%d == %d: %d\n", i, j, i == j);
    printf("%d != %d: %d\n", i, j, i != j);
    printf("%d <= %d: %d\n", i, j, i <= j);
    printf("%d >= %d: %d\n", i, j, i >= j);
    printf("%d < %d : %d\n", i, j, i < j);
    printf("%d > %d : %d\n", i, j, i > j);

    return 0;
}
