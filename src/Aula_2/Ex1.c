/* Ex1.c */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int entrada, ano, mes, dia;

    printf("Digite a quantidade de dias: ");
    scanf("%d", &entrada);

    ano = entrada / 365;
    dia = entrada % 365;
    mes = dia / 30;
    dia = dia % 30;

    printf("\n%d dias correspondem a %d anos, %d meses e %d dias\n",
           entrada, ano, mes, dia);
    printf("total: %d", ano * 365 + mes * 30 + dia);

    //system("PAUSE");
    return 0;
}
