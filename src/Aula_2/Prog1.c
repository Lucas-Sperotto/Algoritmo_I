/* Prog1.c */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int n;
    n = 2;
    printf("Valor = %d, endereço = %p \n", n, &n);
    //system("PAUSE");
    return 0;
}
