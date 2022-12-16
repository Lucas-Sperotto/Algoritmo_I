/* Prog12.c */
/* Imprime uma �rvore de natal */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
#include <conio.h> /* para getche() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    char sd, se;
    int i, k, j;
    system("cls");/* Limpa a tela */
    printf("\nSinal interno direito : ");
    sd = getche();/* caractere de desenho da �rvore */
    printf("\nSinal interno esquerdo: ");
    se = getche();/* caractere de desenho da �rvore */

    printf("\n\n");/* Pula 2 linhas antes do in�cio do desenho */

    for(i = 0; i < 4; i++)
    {
        for(k = 1; k < 5; k++)
        {
            for(j = 1; j <= 40 - (2 * i + k); j++)
                printf(" "); /* Imprime brancos */
            printf("/");/* delimitador inicial da linha */
            for(j = 1; j < (2 * i + k); j++)
                printf("%c", se); /* at� o meio  */
            for(j = 1 ; j < (2 * i + k); j++)
                printf("%c", sd);/* meio ao fim */
            printf("\\\n"); /* delimitador final da linha */
        }
    }
    /* Desenha o p� da �rvore */
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 38; j++)
            printf(" ");
        printf("| |\n");
    }
    printf("\n");
    /* Imprime mensagem centralizada */
    for(j = 0; j < 35; j++)
        printf(" ");
    printf("FELIZ NATAL\n");
    for(j = 0; j < 31; j++)
        printf(" ");
    printf("E UM PROSPERO 2022!\n");

    //system("PAUSE");
    return 0;
}

