/* Prog13.c */
/* Calcula a soma dos quadrados de dois n�meros */
#include <stdio.h>
#include <stdlib.h>

float somasqr(float, float);/* prot�tipo */
float sqr(float); /* prot�tipo */
float soma(float, float);/* prot�tipo */
float pot(float, int);

int main()
{
    float a, b;
    printf("Digite dois n�meros ");
    scanf("%f%f", &a, &b);
    printf("A soma dos quadrados � %f\n" , somasqr(a, b));
    printf("Pot � %f\n", pot(a, 3));
    //system("PAUSE");
    return 0;
}

/* somasqr()*/
/*Calcula a soma dos quadrados de dois n�meros */
float somasqr(float m, float n)
{
    return soma(sqr(m), sqr(n));
}

/* sqr() */
/* Calcula o quadrado de um n�mero */
float sqr(float z)
{
    return z * z;
}

/* soma() */
/* Calcula a soma de dois n�meros */
float soma(float m, float n)
{
    return m + n ;
}

/* a^b */
/* Calcula a soma de dois n�meros */
float pot(float a, int b)
{
    int i;
    float pot = a;
    for (i = 1; i < b; i++)
        pot *= a;
    return pot;
}


