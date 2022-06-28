/* Prog24.c */
/* Mostra operadores relacionais */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int Verdadeiro, Falso;


    Verdadeiro = (15  < 20);
    Falso      = (15 == 20);

    printf("Verdadeiro %d\n", Verdadeiro);
    printf("Falso      %d\n", Falso);

    //system("PAUSE");
    return 0;

}
