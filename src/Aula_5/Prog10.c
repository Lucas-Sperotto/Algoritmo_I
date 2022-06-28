/* Prog10.c */
/* Mostra o uso de um bloco dentro de outro bloco */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int i = 5;
    {/* Inicio do bloco */
        int i = 150;
        printf("%d\n", i); /* Imprime 150 */
    }/*  Fim do bloco */
    printf("%d\n", i); /* Imprime 5 */
    return 0;
}
