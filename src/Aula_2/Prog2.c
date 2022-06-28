/* Prog2.c */
/* Calcula a sua idade em dias */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    float anos, dias;

    printf("Digite a sua idade em anos: ");
    scanf("%f", &anos);

    dias = anos * 365;

    printf("A sua idade em dias é %f.\n", dias);
    //system("PAUSE");
    return 0;
}
