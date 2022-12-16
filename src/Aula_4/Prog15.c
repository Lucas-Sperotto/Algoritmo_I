/* Prog15.c */
/* Testa a sua capacidade de adivinhar uma letra */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() e rand()*/
#include <locale.h> /* para setlocale() */
#include <conio.h>  /* para getch() */
#include <time.h>   /* time() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    char ch = 's'; /* s de sim */
    char resp; /* resposta do usuário */
    char secreto;
    int tentativas;
    srand(time(NULL));

    while(ch == 's')
    {
        secreto = rand() % 26 + 'a';
        tentativas = 1;
        printf("\n\nDigite uma letra entre 'a' e 'z':\n");

        while((resp = getch()) != secreto)
        {
            printf("%c é incorreto. Tente novamente\n",resp);
            tentativas++;
        }
        printf("%c É CORRETO!!\n", resp);
        printf("Voce acertou em %d tentativas\n", tentativas);
        printf("\nQuer jogar novamente? (s/n): ");
        ch = getche();
    }
    printf("\nAté logo e boa sorte!\n");
    //system("PAUSE");
    return 0;
}


