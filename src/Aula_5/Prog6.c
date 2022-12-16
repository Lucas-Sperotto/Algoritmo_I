/*Prog6.c */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    char ch;
    int cont = 0;

    printf("Digite uma frase\n");

    while((ch = getche()) != '\r')
        if(ch == '0')
        {
            printf("\nZERO detectado\n");
            cont++;
        }
    if(cont > 0)
        printf("Você digitou %d zeros.\n", cont);
    else
        printf("Você não digitou zeros.");
    return 0;
}
