/* Prog14.c */
/* Mostra um uso simples do la�o
 while no lugar de um la�o for */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int i = 0; /* Inicializa��o */
    while( i < 20 ) /* Teste */
    {
        printf("%c", '*');
        i++; /* Incremento */
    }
    printf("\n");
    //system("PAUSE");
    return 0;
}
