/* Prog13.c */
/* Calcula a soma dos quadrados de dois números */
#include <stdio.h>
#include <stdlib.h>

float somasqr(float, float);/* protótipo */
float sqr(float); /* protótipo */
float soma(float, float);/* protótipo */
float pot(float, int);

int main()
{
    float a, b;
    printf("Digite dois números ");
    scanf("%f%f", &a, &b);
    printf("A soma dos quadrados é %f\n" , somasqr(a, b));
    printf("Pot é %f\n", pot(a, 3));
    //system("PAUSE");
    return 0;
}

/* somasqr()*/
/*Calcula a soma dos quadrados de dois números */
float somasqr(float m, float n)
{
    return soma(sqr(m), sqr(n));
}

/* sqr() */
/* Calcula o quadrado de um número */
float sqr(float z)
{
    return z * z;
}

/* soma() */
/* Calcula a soma de dois números */
float soma(float m, float n)
{
    return m + n ;
}

/* a^b */
/* Calcula a soma de dois números */
float pot(float a, int b)
{
    int i;
    float pot = a;
    for (i = 1; i < b; i++)
        pot *= a;
    return pot;
}


