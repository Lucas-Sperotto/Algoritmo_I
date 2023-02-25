#include <stdio.h>
#include <math.h>

void solve(int, int, int);
int c_delta(int, int, int);

int main()
{
    int a, b, c;

    printf("Para uma equacao no formato\n\tax^2+bx+c = 0\n");
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    solve(a, b, c);

    return 0;
}

void solve(int a, int b, int c)
{
    int delta = c_delta(a, b, c);
    float raiz;

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
}
int c_delta(int a, int b, int c)
{
    return (b * b) - (4 * a * c);
}
