/* Prog15.c */
/* Imprime uma frase invertida. Usa recurs�o */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void inverte(void); /* Prot�tipo */

int main()
{
    inverte();

    printf("\n");
    //system("PAUSE");
    return 0;
}

/* inverte() */
/* Inverte uma frase usando recurs�o */
void inverte()
{
    char ch;
    if((ch = getche()) != '\r') inverte();
    printf("%c", ch);
}
