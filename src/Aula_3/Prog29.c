/* Prog29.c */
/* Mostra opera��es com operadore tern�rio */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main ()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    numero >= 0 ? numero++ : numero--;

    printf("O novo valor de numero e: %d", numero);

    return(0);
}
