/* Prog27.c */
/* Mostra o uso de macros */
#include <stdio.h>
#include <stdlib.h>

#define PRN(n)	printf("%.2lf\n", (double)n)

int main()
{

    int n1,n2;
    n1=1416;
    n2=n1/2;

    PRN(n1); /* Chamada a macro */
    PRN(n2); /* Chamada a macro */

    system("PAUSE");
    return 0;
}
