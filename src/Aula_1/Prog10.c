/* Prog10.cpp */
/* Tamanho de campo com inteiros */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int lapis = 45, borrachas = 2345,
        canetas = 420, cadernos = 8, fitas = 13050;
    printf("\nLapis        %12d", lapis);
    printf("\nBorrachas    %12d", borrachas);
    printf("\nCanetas      %12d", canetas);
    printf("\nCadernos     %12d", cadernos);
    printf("\nFitas        %12d", fitas);
    printf("\n");

    system("PAUSE");
    return 0;
}
