/* Prog22.c */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int i = 3;

    printf("\n%d\t%d\t%d\n", (i = i + 1), (i = i + 1), (i = i + 1));

    system("PAUSE");
    return 0;
}
