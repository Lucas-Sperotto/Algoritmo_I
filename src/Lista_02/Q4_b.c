#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    int delta;
    float raiz;

    printf("Para uma equacao no formato\n\tax^2+bx+c = 0\n");
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    delta = (b * b) - (4 * a * c);

    if (delta < 0)
    {
        printf("Nao tem raizes reais\n");
    }
    else
    {
        if (delta == 0)
        {
            raiz = -(float)b / (float)(2 * a);
            printf("X = %f\n", raiz);
        }
        else
        {
            raiz = (-(float)b + sqrt(delta)) / (float)(2 * a);
            printf("Xi = %f\n", raiz);
            raiz = (-(float)b - sqrt(delta)) / (float)(2 * a);
            printf("Xii = %f\n", raiz);

        }
    }
    return 0;
}
