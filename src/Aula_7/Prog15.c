/* Prog15.c */
/* Adivinha o número que o usuário pensou */
/* Mostra o uso de break */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
#include <conio.h>	/* para getche()*/

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    float incr = 50.0, adiv = 50.0;

    printf("Pense em um número entre 1 e 99, e responda\n");
    printf(" =,  > ou  <  para igual, maior ou menor\n");

    while (incr > 1)
    {
        char ch;

        incr /= 2; // incr = incr / 2;
        printf("\n=, > ou < a %d? ",(int)adiv);

        if((ch = getche()) == '=') break;

        else if(ch == '>') adiv += incr;
        else adiv -= incr;
    }

    printf("\nO número é %d",(int)adiv);
    printf("\nCOMO SOU ESPERTO !!!!\n");

    //system("PAUSE");
    return 0;
}
