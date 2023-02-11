#include <stdio.h>

int main()
{
    int numero[3], i;

    for(i = 0; i < 3; i++)
    {
        printf("Digite o numero [%d]: ", i + 1);
        scanf("%d", &numero[i]);
    }

    for(i = 2; i >= 0; i--)
    {
        printf("%d\n", numero[i]);
    }
    /*
    printf("Digite o numero 1: ");
    scanf("%d", &numero1);
    printf("Digite o numero 2: ");
    scanf("%d", &numero2);
    printf("Digite o numero 3: ");
    scanf("%d", &numero3);

    printf("\n%d\n", numero3);
    printf("%d\n", numero2);
    printf("%d\n", numero1);
*/
    return 0;
}
