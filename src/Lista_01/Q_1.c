#include <stdio.h>

int main()
{
    int ano;
    printf("Entre com um ano: ");
    scanf("%d", &ano);

    printf("O ano digitado � %s",
           ((((ano % 4) == 0) && ((ano % 100) != 0)) || ((ano % 400) == 0))? "Bissexto" : "N�o-Bissexto");
    return 0;
}

