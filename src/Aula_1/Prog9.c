/* Prog9.c */
/* Tamanho de campo com inteiros */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    printf("Os alunos são %2d.\n", 350);
    printf("Os alunos são %4d.\n", 350);
    printf("Os alunos são %5d.\n", 350);

    system("PAUSE");
    return 0;
}
