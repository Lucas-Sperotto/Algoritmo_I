#include <stdio.h>

int main()
{
    int a, b;

    printf("Digite o numero a: ");
    scanf("%d", &a);
    printf("Digite o numero b: ");
    scanf("%d", &b);

    if(a < b)
    {
        printf("O numero maior � o b.");
    }
    else
    {
        printf("O numero maior � o a.");
    }

    return 0;
}
