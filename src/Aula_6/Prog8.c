/*Prog8.c */
/*Jogo de cara ou coroa */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int n, perda = 0, ganho = 0, resp, i;
    printf("Quantas vezes voc� quer jogar? ");
    scanf("%d", &n);
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        printf("Escolha:  0 = Cara  e  1 = Coroa: ");
        scanf("%d", &resp);
        while (resp != 0 && resp != 1)
        {
            printf("ERRO: entre 0 cara e 1 coroa ");
            scanf("%d", &resp);
        }
        if((rand() % 2) == resp)
        {
            ganho++;
            if(resp == 0)
                printf("Cara, voc� ganhou.\n");
            else
                printf("Coroa, voc� ganhou.\n");
        }
        else
        {
            perda++;
            if(resp == 1)
                printf("Cara, voc� perdeu.\n");
            else
                printf("Coroa, voc� perdeu.\n");
        }
    }
    printf("\n\nRelat�rio Final:");
    printf("\nNo. de jogos que voc� ganhou:   %d", ganho);
    printf("\nNo. de jogos que voc� perdeu:   %d\n", perda);
    return 0;
}
