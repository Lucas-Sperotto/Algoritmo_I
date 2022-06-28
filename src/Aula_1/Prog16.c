/* Prog16.c */
/* Tamanho de campo com cadeias de caracteres */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    printf("\nOBJETO       %12s", "CODIGO");
    printf("\nLapis        %12s", "WQR");
    printf("\nBorrachas    %12s", "ASO");
    printf("\nCanetas      %12s", "KPX");
    printf("\nCadernos     %12s", "FJI");
    printf("\nFitas        %12s", "TYE");
    printf("\n");

    system("PAUSE");
    return 0;
}
