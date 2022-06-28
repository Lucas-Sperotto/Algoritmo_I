/* Prog18.c */
/* Simula uma calculadora de 4 operações*/
/* Mostra o uso de switch */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    const int TRUE = 1;

    while(TRUE)	/* Sempre verdadeiro*/
    {
        float n1, n2;
        char op;
        printf("\nDigite número operador número: ");
        scanf("%f %c %f", &n1, &op, &n2);
        if(n1 == 0.0) break;/*Termina se Zero digitado*/
        switch(op)
        {
        case '+':
            printf("\n%f", (n1 + n2));
            break;
        case '-':
            printf("\n%f", (n1 - n2));
            break;
        case '*':
            printf("\n%f", (n1 * n2));
            break;
        case '/':
            printf("\n%f", (n1 / n2));
            break;
        default:
            printf("\nOperador desconhecido.");
        }
    }
    printf("\n");
    return 0;
}
