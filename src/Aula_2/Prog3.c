/* Prog3.c */
/* Mostra o uso de scanf() com várias entradas */
/* Calcula a média de 4 notas */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    float p1, p2, p3, p4;
    double media;

    printf("\nDigite as notas das 4 provas: ");
    scanf("%f%f%f%f",&p1, &p2, &p3, &p4);

    media = (p1 + p2 + p3 + p4) / 4.0;

    printf("\nMÉDIA: %.2f\n", media);
    //system("PAUSE");
    return 0;
}
