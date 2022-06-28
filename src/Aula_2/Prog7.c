/* Prog7.c */
/* Impressão formatada com printf() */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    char a;

    printf("Digite um caractere e veja-o em decimal,");
    printf(" octal e hexadecimal: ");

    scanf("%c", &a);

    printf("\nCaractere = %c\nDec\t= %d\nOct\t= %o\nHex\t= %x\n",
           a, a, a, a);
    //system("PAUSE");
    return 0;
}
