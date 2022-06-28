/* Prog11.c */
/* Tamanho de campo com ponto flutuante */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    float lapis = 4.875, borrachas = 234.542, canetas = 42.036,
          cadernos = 8.0, fitas = 13.05;
    printf("\nLapis        %12.2f", lapis);
    printf("\nBorrachas    %12.2f", borrachas);
    printf("\nCanetas      %12.2f", canetas);
    printf("\nCadernos     %12.2f", cadernos);
    printf("\nFitas        %12.2f", fitas);
    printf("\n");

    system("PAUSE");
    return 0;
}
