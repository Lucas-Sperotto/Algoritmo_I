/* Prog25.c */
/* Mostra a precedência dos operadores relacionais */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    printf("O valor da expressão 4 + 1 < 3 é %d\n", 4 + 1 < 3);
    printf("O valor da expressão 2 < 1 + 3 é %d\n", 2 < 1 + 3);

    //system("PAUSE");
    return 0;
}
