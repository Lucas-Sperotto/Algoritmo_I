#include <stdio.h>

int main()
{
   int numero;

    printf("Digite o numero: ");
    scanf("%d", &numero);

    if ((numero % 2) == 0)
    {
        printf("PAR");
    }
    else
    {
        printf("IMPAR");
    }
    return 0;
}
