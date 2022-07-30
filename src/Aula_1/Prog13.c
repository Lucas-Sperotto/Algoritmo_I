/* Prog13.c */

#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "portuguese-brazilian"); /* Configura o idioma portugues */
    /* Sem tamanho de campo */
    printf("%.2f %.2f %.2f\n",
           8.0, 15.3, 584.13);
    printf("%.2f %.2f %.2f\n",
           834.0, 1500.55, 4890.21);

    /* Com tamanho de campo */
    printf("%10.2f %10.2f %10.2f\n",
           8.0, 15.3, 584.13);
    printf("%10.2f %10.2f %10.2f\n",
           834.0, 1500.55, 4890.21);

    /* Tamanho de campo e justificado à esquerda */
    printf("%-10.2f %-10.2f %-10.2f\n",
           8.0, 15.3, 584.13);
    printf("%-10.2f %-10.2f %-10.2f\n",
           834.0, 1500.55, 4890.21);

    system("PAUSE");
    return 0;
}
