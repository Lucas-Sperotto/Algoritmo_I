#include <stdio.h>

int main()
{
    int senha = 334455;

    int S_usuario;

    printf("Digite a senha: ");
    scanf("%d", &S_usuario);

    if(S_usuario == senha)
    {
        printf("Senha Confere.");
    }
    else
    {
        printf("Senha não Confere.");
    }

    return 0;
}
