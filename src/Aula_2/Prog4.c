/* Prog4.c */
/* Adivinha numero */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int r, soma, num1, num2, num3, num4, num5;

    printf("\nDigite um n�mero de at� 4 algarismos: ");
    scanf("%d", &num1);

    r = 19998 + num1;

    printf("\nO resultado da soma �: %d", r);
    printf("\nDigite o segundo n�mero: ");
    scanf("%d", &num2);

    num3 = 9999 - num2;
    printf("\nO meu n�mero �: %d", num3 );
    printf("\nDigite o quarto n�mero: ");
    scanf("%d", &num4);

    num5 = 9999 - num4;
    printf("\nO meu n�mero �: %d\n", num5);

    soma = num1 + num2 + num3 + num4 + num5;

    printf("Palpite: %d; Soma: %d \n", r, soma);
    //system("PAUSE");
    return 0;
}
