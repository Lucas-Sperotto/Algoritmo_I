/* Prog3.c */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> /* para getche() *?

/* minusculo() */
/* converte para minusculo se for maiusculo */
unsigned char minusculo(unsigned char);

int main()
{
    unsigned char ch ;
    ch=getche(); /* le um caractere */
    printf("%c", minusculo(ch));
    //system("PAUSE");
    return 0;
}

unsigned char minusculo(unsigned char ch)
{
    if(ch >= 'A' && ch <= 'Z') /* se maiusculo ? */
        return(ch + 'a' - 'A'); /* devolve convertido */
    else
        return(ch); /* devolve sem converter*/
}
