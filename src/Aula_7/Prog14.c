/* Prog14.c */
/* Mostra o uso de funções recursivas */
#include <stdio.h>
#include <stdlib.h>

long fatorial(int); /* Protótipo */

int main()
{
    int n;

    do
    {
        printf("Digite um número ou negativo para terminar: ");
        scanf("%d", &n);
        if(n < 0) break; /* Termina se no. negativo */
        printf("O fatorial de %d é %d.\n", n, fatorial(n));
    }
    while(1);
    //system("PAUSE");
    return 0;
}

/* fatorial() */
/* Calcula o fatorial de um número. Recursiva */
long fatorial(int n)
{
    return((n == 0) ? (long)1 : (long)n * fatorial(n - 1));
}

long fatoriali(int numero) {
    int resultado = numero;
    if (numero == 0) resultado++;
    while (numero > 1) resultado *= --numero;
    return resultado;
}
