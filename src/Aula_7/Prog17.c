/* Prog17.c */
/* Imprime o dia da semana a partir de uma data */
/* Mostra o uso de switch */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
#include <conio.h>	/* para getch()*/
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int dia, mes, ano, dSemana;
    const char ESC = 27;
    do
    {
        printf("Digite a data na forma dd mm aaaa: ");
        scanf("%d%d%d",&dia, &mes, &ano);
        dSemana = ano + dia + 3 * (mes - 1) - 1;
        if(mes < 3)
            ano--;
        else
            dSemana -= (int)(0.4 * mes + 2.3);
        dSemana += (int)(ano / 4) - (int)((ano / 100 + 1) * 0.75);
        dSemana %= 7;
        switch(dSemana)
        {
        case 0:
            printf("Domingo");
            break;
        case 1:
            printf("Segunda-feira");
            break;
        case 2:
            printf("Terça-feira");
            break;
        case 3:
            printf("Quarta-feira");
            break;
        case 4:
            printf("Quinta-feira");
            break;
        case 5:
            printf("Sexta-feira");
            break;
        case 6:
            printf("Sábado");
        }
        printf("\nESC para terminar ou ENTER para recomeçar");
        printf("\n");
    }
    while (getch() != ESC);
    return 0;
}
