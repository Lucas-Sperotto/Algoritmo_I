/* Prog16.c */
/* Resolve o jogo da torre de hanoi. Usa recursão */
#include <stdio.h>
#include <stdlib.h>

void mover(int, char, char, char); /* Protótipo */

int main()
{
    mover(4,'O','T','D');/* O = origem, T = temporária, D = Destino */
    //system("PAUSE");
    return 0;
}

void mover(int n, char Orig, char Temp, char Dest)
{
    if(n == 1)
        printf("Mova o disco 1 da haste %c para a haste %c\n",
               Orig , Dest);
    else
    {
        mover(n - 1 , Orig, Dest, Temp);
        printf("Mova o disco %d da haste %c para a haste %c\n",
               n, Orig, Dest);
        mover(n - 1, Temp, Orig, Dest);
    }
}
