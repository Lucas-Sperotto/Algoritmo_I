/* Prog4.c */
#include <stdio.h>
#include <stdlib.h>

int abs(int);	/* prot�tipo */

int main()
{
    int x = 10;
    printf("%d\t%d\t%d\n", abs(0), abs(-3), abs(-x));
    //system("PAUSE");
    return 0;
}

/* abs() */
/* Calcula o valor absoluto de um n�mero*/
int abs(int n)
{
    return (n > 0) ? n : -n;
}
