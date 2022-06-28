/* Prog10.c */
/* Conversão de tipo automática */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int VarInt = 2000000000;
    int Dez = 10;

    VarInt = ((double)VarInt * Dez) / Dez;     /* valor muito grande */
    printf("\nVarInt = %lf\n", VarInt); /* resposta errada    */
    //system("PAUSE");
    return 0;
}
