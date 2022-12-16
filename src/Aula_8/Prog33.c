/* Prog33.c */
/* Agora com uma função */
#include <stdio.h>
#include <stdlib.h>

int menor(int x,int y)
{
    return (x < y) ? x : y ;
}


int main()
{
    int n1 = 1, n2 = 2, n;

    n = menor( n1++ , n2++ );

    printf("n1=%d\tn2=%d\tn=%d\n", n1, n2, n);

    system("PAUSE");
    return 0;
}
