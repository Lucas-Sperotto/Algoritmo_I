/* Prog18.cpp */
/* Definindo a base numérica */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    printf("\n%d", 65);
    printf("\n%x", 65);
    printf("\n%o", 65);
    printf("\n%c", 65);
    printf("\n");

    system("PAUSE");
    return 0;
}
