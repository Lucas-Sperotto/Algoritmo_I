#include <stdio.h>
int main()
{
    int a, b, c, i, soma = 0;

    printf("Digite o valor de a maior que um: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    for(i = b; i <= c; i++)
    {

        if ((i % a) == 0)
        {
            soma += i;
        }
    }
    printf("A soma dos numeros entre %d e %d divisiveis por %d e: %d\n", b, c, a, soma);
    return 0;
}
