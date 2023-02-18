#include <stdio.h>
int main()
{
    int senha = 12345;
    int n, i;

    for(i = 0; i < 3; i++)
    {
        printf("Digite a senha: ");
        scanf("%d", &n);
        if (n == senha)
        {
            printf("senha correta\n");
            break;
        }
        else
        {
            printf("senha incorreta\n");
            if(i == 2){
                 printf("cartão BLOQUEADO\n");
            }
        }
    }
    return 0;
}
