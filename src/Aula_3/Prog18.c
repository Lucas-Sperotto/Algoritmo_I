/* Prog18.c */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int i = 3, n;
    n = i * (i + 1) + (++i);
    printf("\nn = %d\n", n);
    //system("PAUSE");
    return 0;
}
