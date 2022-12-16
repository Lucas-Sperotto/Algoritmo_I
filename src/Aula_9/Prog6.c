/* NumDias.C */
/* Imprime o número de dias do ano até a data especificada */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dmes[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int dia, mes, ano, total, i;

    printf("Digite a data no formato DD/MM/AAAA: ");

    /* %*c lê caractere do teclado e não atribui a nada */
    scanf("%d%*c%d%*c%d", &dia, &mes, &ano);

    if( ((!(ano%4) && ano%100)) || !(ano%400))
        dmes[1] = 29; 	/* Ano bissexto */

    total = dia;

    for(i = 0; i < (mes-1); i++)
        total += dmes[i];

    printf("Total de dias transcorridos desde o início do ano: %d\n",
           total);

    system("PAUSE");
    return 0;
}

