/* Prog28.c */
/* Mostra o uso de macros */
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1,n2;
    n1=1416;
    n2=n1/2;

    printf("%.2lf\n", (double)n1); /* Chamada a macro */
    printf("%.2lf\n", (double)n2); /* Chamada a macro */

    system("PAUSE");
    return 0;
}
