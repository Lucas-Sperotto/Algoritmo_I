/* Prog28.c */
/* Mostra operações com operadores lógicos */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int x, y;

    printf("Digiteo primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    printf("\n(%d>0) && (%d<0): %d\n", x, y, ((x > 0) && (y < 0)));
    printf("\n(%d>0) || (%d<0): %d\n", x, y, ((x > 0) || (y > 0)));

    return 0;
}
