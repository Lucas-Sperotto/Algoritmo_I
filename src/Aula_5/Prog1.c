/*Prog1.c */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int anos;
    printf("Quantos anos voc� tem? \n");

    scanf("%d", &anos);

    if(anos < 30) /* Toma uma decis�o caso anos < 30 */
        printf("Voc� � muito jovem!\n");

    //system("PAUSE");
    return 0;
}
