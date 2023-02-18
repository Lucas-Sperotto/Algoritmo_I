#include <stdio.h>
int main()
{
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    while(1)
    {
        printf("Digite o valor de b: ");
        scanf("%d", &b);
        if (b == 0)
        {
            printf("o numero b não pode ser zero, digite novamente\n");
            continue;
        }
        else
        {
            break;
        }
    }
    printf("A divisao de %d por %d e: %d", a, b, (a/b));
    return 0;
}
