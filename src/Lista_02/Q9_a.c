#include <stdio.h>
int main()
{
    int n, cont = 0, soma = 0;
    while(1)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n == 0)
        {
           break;
        }
        if ((n % 2) == 0)
        {
        soma += n;
           cont++;
        }
    }
    printf("a media dos numeros pares e: %f", (float)soma/(float)cont);
    return 0;
}
