/* Prog15.c */
/* Imprime uma frase invertida. Usa recursão */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void inverte(void); /* Protótipo */

int main()
{
    inverte();

    printf("\n");
    //system("PAUSE");
    return 0;
}

/* inverte() */
/* Inverte uma frase usando recursão */
void inverte()
{
    char ch;
    if((ch = getche()) != '\r') inverte();
    printf("%c", ch);
}
