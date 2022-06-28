/* Prog17.c */
/* Tamanho de campo e complementando com zeros */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    printf("\n%04d", 21);
    printf("\n%06d", 21);
    printf("\n%6.4d", 21);
    printf("\n%6.0d", 21);

    system("PAUSE");
    return 0;
}
