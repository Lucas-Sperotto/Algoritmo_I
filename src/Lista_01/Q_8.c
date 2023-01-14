#include <stdio.h>
#include <conio.h>
int main()
{
    char caractere;

    int dist = 32;

    caractere = getch();

    printf("\nCaractere = %c\n", (caractere >= 97)? (caractere - dist): caractere);
    return 0;
}
