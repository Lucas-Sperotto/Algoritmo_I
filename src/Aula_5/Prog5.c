/*Prog5.c */
/*Calcula o quadrado de números */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
#include <conio.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int i, n, soma = 0;

    clock_t t;
    t = clock();
    //printf("Digite um número:\n");
    //scanf("%d", &n);
    //printf("O quadrado de %d é ", n);

    if( n < 0 ) n = -n;/*Se negativo, muda o sinal*/
    /*
        for(i = 1 ; n > 0 ; n-- )
        {
            soma += i;
            i += 2;
        }

        printf("%d.\n", soma);
    */

    for(i = 0; i <= (n - 1); i++)
        soma += (2 * i + 1);

    printf("%d.\n", soma);


    t = clock() - t;
    printf ("TEmpo: %f seconds.\n",((float) t) / CLOCKS_PER_SEC);
    //system("PAUSE");
    return 0;
}
