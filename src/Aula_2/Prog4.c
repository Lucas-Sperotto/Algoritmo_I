/* Prog4.c */
/* Adivinha numero */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int r, soma, num1, num2, num3, num4, num5;

    printf("\nDigite um número de até 4 algarismos: ");
    scanf("%d", &num1);

    r = 19998 + num1;

    printf("\nO resultado da soma é: %d", r);
    printf("\nDigite o segundo número: ");
    scanf("%d", &num2);

    num3 = 9999 - num2;
    printf("\nO meu número é: %d", num3 );
    printf("\nDigite o quarto número: ");
    scanf("%d", &num4);

    num5 = 9999 - num4;
    printf("\nO meu número é: %d\n", num5);

    soma = num1 + num2 + num3 + num4 + num5;

    printf("Palpite: %d; Soma: %d \n", r, soma);
    //system("PAUSE");
    return 0;
}
