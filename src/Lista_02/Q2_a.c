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
        printf("O numero maior é o b.");
    }
    else
    {
        printf("O numero maior é o a.");
    }

    return 0;
}
