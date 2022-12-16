/* Prog13.c */
/*Simula uma calculadora de 4 operações*/
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    const int TRUE = 1;

    while(TRUE)	/* Sempre verdadeiro*/
    {
        //float n1, n2;
        int n1, n2;
        char op;

        printf("\nDigite número operador número: ");
        scanf("%f %c %f", &n1, &op, &n2);

        if(op == '+')
            printf("\n%d", (n1 + n2));
        //printf("\n%f", (n1 + n2));
        else if(op == '-')
            printf("\n%d", (n1 - n2));
        //printf("\n%f", (n1 - n2));
        else if(op == '*')
            printf("\n%d", (n1 * n2));
        //printf("\n%f", (n1 * n2));
        else if(op == '/')
            printf("\n%d", (n1 / n2));
        //printf("\n%f", (n1 / n2));
        else if(op == '%')
            printf("\n%d", (n1 % n2));
        else
            printf("\nOperador desconhecido.");
    }
    printf("\n");
    //system("PAUSE");
    return 0;
}
