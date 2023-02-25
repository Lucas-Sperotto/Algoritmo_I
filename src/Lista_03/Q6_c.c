#include <stdio.h>
int main()
{
    int n1, n2, n3, n4, n5, maior, menor, AT;

    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o valor do segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o valor do terceiro numero: ");
    scanf("%d", &n3);

    printf("Digite o valor do quarto numero: ");
    scanf("%d", &n4);

    printf("Digite o valor do quinto numero: ");
    scanf("%d", &n5);

    maior = n1;

    if (maior < n2)
    {
        maior = n2;
    }
    if (maior < n3)
    {
        maior = n3;
    }
    if (maior < n4)
    {
        maior = n4;
    }
    if (maior < n5)
    {
        maior = n5;
    }

    printf("maior: %d", maior);


    menor = n1;

    if (menor > n2)
    {
        menor = n2;
    }
    if (menor > n3)
    {
        menor = n3;
    }
    if (menor > n4)
    {
        menor = n4;
    }
    if (menor > n5)
    {
        menor = n5;
    }
    printf("/nmenor: %d", menor);

    AT = maior - menor;
    printf("/nAT= %d", AT);

    return 0;
}
