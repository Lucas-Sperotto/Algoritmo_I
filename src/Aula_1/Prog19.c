/* Prog19.cpp */
/* Caracteres gr�ficos */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
//#include <locale.h> /* para setlocale() */
int main()
{
    //setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    system("cls");/*Limpa a tela*/
    printf("\n\n");

    /*Inicia a impress�o do carro*/
    printf("\n\t\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
    printf("\n\t\xDFO\xDF\xDF\xDF\xDFO\xDF");
    /*Fim da impress�o do carro*/
    printf("\n\n");

    /*Inicia a impress�o da caminhonete*/
    printf("\n\t\xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB");
    printf("\n\t\xDFO\xDF\xDF\xDF\xDF\xDFOO\xDF");
    /*Fim da impress�o da caminhonete*/
    printf("\n\n");

    system("PAUSE");
    return 0;
}
