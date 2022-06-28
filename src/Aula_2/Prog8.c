/* Prog8.c */
/* Mostra o uso do caractere * com scanf()*/
/* Digitando uma data formatada */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int dia,mes,ano;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d%*c%d%*c%d", &dia, &mes, &ano);

    printf("A data que você digitou foi: %02d/%02d/%d\n",
           dia, mes, ano);
    //system("PAUSE");
    return 0;
}
