/* Prog16.c */
/* Elimina impress�o de d�gitos */
/* Mostra o uso de continue */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
#include <conio.h>	/* para getche()*/

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    char ch;
    while ((ch = getch()) != 'X') /* Termina quando digitado X*/
    {
        if((ch >= '0' && ch <= '9')) /*� d�gito?*/
            continue; /*Execute o teste novamente*/
        printf("%c", ch);
    }
    printf("\n");
    //system("PAUSE");
    return 0;
}
