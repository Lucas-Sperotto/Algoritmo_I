/* Prog11.c */
/* Mostra o operador de conversão de tipo */
#include <stdio.h> /* para printf() */
#include <stdlib.h>/* para system() */
#include <locale.h> /* para setlocale() */
int main()
{
    setlocale(LC_ALL, "Portuguese"); /* Configura o idioma portugues */
    int VarInt = 2000000000;
    int Dez = 10;
    VarInt = ((double)VarInt * Dez) / Dez; /* converte p/double */
    printf("\nVarInt = %d\n", VarInt);	 /* resposta correta  */
    system("PAUSE");
    return 0;
}
