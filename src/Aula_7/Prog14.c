/* Prog14.c */
/* Mostra o uso de fun��es recursivas */
#include <stdio.h>
#include <stdlib.h>

long fatorial(int); /* Prot�tipo */

int main()
{
    int n;

    do
    {
        printf("Digite um n�mero ou negativo para terminar: ");
        scanf("%d", &n);
        if(n < 0) break; /* Termina se no. negativo */
        printf("O fatorial de %d � %d.\n", n, fatorial(n));
    }
    while(1);
    //system("PAUSE");
    return 0;
}

/* fatorial() */
/* Calcula o fatorial de um n�mero. Recursiva */
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
