/* Prog16.c */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int n = 5;
    int x = ++n;
    printf("\nN = %d    X = %d", n, x);
    // system("PAUSE");
    return 0;
}
