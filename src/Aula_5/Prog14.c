/* Prog14.c */
/* Mostra um uso simples do laço
 while no lugar de um laço for */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int i = 0; /* Inicialização */
    while( i < 20 ) /* Teste */
    {
        printf("%c", '*');
        i++; /* Incremento */
    }
    printf("\n");
    //system("PAUSE");
    return 0;
}
