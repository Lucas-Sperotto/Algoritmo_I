/* Prog12.cpp */
/* Tamanho de campo com ponto flutuante */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    printf("%4.2f\n", 3456.78);
    printf("%3.2f\n", 3456.78);
    printf("%3.1f\n", 3456.78);
    printf("%10.3f\n", 3456.78);

    system("PAUSE");
    return 0;
}





