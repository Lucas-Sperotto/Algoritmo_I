/****************************************************
 * Esse programa mostra a declara��o de vari�veis   *
 ****************************************************/
/* Prog5.c */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    /* Todas as vari�veis devem ser declaradas no in�cio do bloco */
    int num1; /* � obrigat�rio declarar vari�veis em C */
    int num2;

    num1 = 44;  /* atribui em num1 a constante 44 */
    num2 = num1 + 20; /* atribui em num2 o resultado da soma do conteudo de num1 pela constante 20 */

    printf("\nO primeiro n�mero � %d", num1);
    printf("\nO segundo n�mero � \" %d + 20 \" = %d\n", num1, num2);

    system("PAUSE");
    return 0;
}
