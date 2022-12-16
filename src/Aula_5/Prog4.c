/* Prog4.c */
/* Mostra if aninhados */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    char ch;
    printf("Digite uma letra de 'a' a 'z':");
    ch = getche();
    if(ch >= 'a')// && ch <= 'z')
        if(ch <= 'z')
            printf("\nVoce digitou uma letra minúscula.\n");
    //system("PAUSE");
    return 0;
}
