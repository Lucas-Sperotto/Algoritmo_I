/* Prog9.c */
/* Imprime a média aritmética de 10 notas */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */

int main()
{

    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    float soma = 0.0;
    //float nota;
    const int max = 10;
    int i;

    for(i = 0; i < max; i++)
    {
        float nota;
        printf("\nDigite a nota %d : ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }
    nota = 11;
    printf("\nMédia = %.2f\n", soma / max);

    //system("PAUSE");
    return 0;
}
