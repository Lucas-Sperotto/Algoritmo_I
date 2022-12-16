/* Prog30.c */
/* Mostra problemas com macros */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAIUSC(ch)	( (ch) >= 'a' && (ch) <='z' ) ? \
					( (ch) - 'a' + 'A' ) : (ch)

int main()
{
    char cp;

    cp= MAIUSC(getch()); /* Problemas */

    printf("%c\n", cp);

    system("PAUSE");
    return 0;
}
