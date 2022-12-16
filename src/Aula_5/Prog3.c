/*Prog3.c */
/*Conta caracteres e palavras de uma frase */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int nch = 0;
    int npalavras = 0;
    char ch;

    printf("Digite uma frase:\n");

    while((ch = getche()) != '\r') /* termina com [enter] */
    {
        nch++; /* conta caracteres */
        if(ch == ' ')/* espaço em branco ? */
            npalavras++;
    }

    printf("\n\nForam contados %d caracteres ", nch);
    printf("e %d palavras nesta frase.\n", npalavras + 1);

    return 0;
}
