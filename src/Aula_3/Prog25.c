/* Prog25.c */
/* Mostra a preced�ncia dos operadores relacionais */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    printf("O valor da express�o 4 + 1 < 3 � %d\n", 4 + 1 < 3);
    printf("O valor da express�o 2 < 1 + 3 � %d\n", 2 < 1 + 3);

    //system("PAUSE");
    return 0;
}
