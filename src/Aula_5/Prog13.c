/* Prog13.c */
/* Conta caracteres de uma frase */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
#include <conio.h> /* para getche() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int cont = 0; /* Contador */

    while(getche() != '\r') /* Enquanto n�o [Enter]  */
        cont++; /* Corpo do la�o */
    /* Fora do la�o */
    printf("\nO n�mero de caracteres � %d\n", cont);

    //system("PAUSE");
    return 0;
}
