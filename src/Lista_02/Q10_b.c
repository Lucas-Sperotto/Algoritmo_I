#include <stdio.h>
int main()
{
    int i, n, n_i = 0, n_p = 0;

    for(i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if ((n % 2) == 0)
        {
            n_p++;
        }
        else
        {
            n_i++;
        }
    }
    printf("foram digitados %d numero pares ", n_p);
    printf("e %d numero impares.\n", n_i);
    return 0;
}
