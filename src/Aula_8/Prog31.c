/* Prog31.c */
/* Mostra o uso de funções no lugar de macros */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char maiusc(char ch)
{
    return (ch>='a'&& ch <='z') ? (ch - 'a' + 'A' ) : ch;
}

int main()
{
    char cp;

    cp= maiusc(getch()); /* Ok */

    printf("%c\n", cp);

    system("PAUSE");
    return 0;
}
