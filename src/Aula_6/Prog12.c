/*Prog12.c */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int dia, mes;

    printf("Digite: dia mes: ");
    scanf("%d%d", &dia, &mes);

    if(mes == 12 && dia == 25)
        printf("FELIZ NATAL!\n");
    else
        printf("BOM DIA!\n");
//system("PAUSE");
    return 0;
}
