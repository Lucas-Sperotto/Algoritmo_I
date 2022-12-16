#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    putchar(205);
    printf("O quadrado do numero é %d.\n", (n * n));
    system("pause");
    return 0;
}
int potencia(int x, int n)
{

    for(l = 0; i < n; i++)
    {
        x = x * x;
    }
    return x;
}
