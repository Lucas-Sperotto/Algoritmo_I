/* Prog16.c */
/* Testa a sua capacidade de adivinhar uma letra */
/* Agora com o la�o do-while */
#include <stdio.h> /* para printf() */
#include <stdlib.h> /* para system() e rand()  */
#include <locale.h> /* para setlocale() */
#include <conio.h>   /* para getch() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    char resp; /* resposta do usu�rio */
    char secreto;
    int tentativas;

    do /*inicio do la�o */
    {
        secreto = rand() % 26 + 'a';
        tentativas = 1;
        printf("\n\nDigite uma letra entre 'a' e 'z':\n");

        while((resp = getch()) != secreto)
        {
            printf("%c � incorreto. Tente novamente\n", resp);
            tentativas++;
        }
        printf("%c � CORRETO!!\n", resp);
        printf("Voce acertou em %d tentativas\n", tentativas);
        printf("\nQuer jogar novamente? (s/n): ");
    }
    while(getche() == 's');
    printf("\nAt� logo e boa sorte!\n");
    //system("PAUSE");
    return 0;
}


