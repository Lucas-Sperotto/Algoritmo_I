/* Prog15.c */
/* Tamanho de campo e justificado à esquerda */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "portuguese-brazilian"); /* Configura o idioma portugues */
    printf("%-10.2f %-10.2f %-10.2f\n", 8.0, 15.3, 584.13);
    printf("%-10.2f %-10.2f %-10.2f\n", 834.0, 1500.55, 4890.21);

    system("PAUSE");
    return 0;
}
