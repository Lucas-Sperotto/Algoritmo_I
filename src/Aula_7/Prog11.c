/* Prog11.c */
/* calcula a diferenca entre dois tempos */
/* solicita hora:minutos */
#include <stdio.h>
#include <stdlib.h>

int minutos(int, int); /* protótipo */

int main()
{
    int minsl, mins2;
    int hora, min;

    printf("Digite a primeira hora (hora:min): ");
    scanf("%d:%d", &hora, &min); /* novo uso de scanf hh:mm */

    minsl = minutos(hora, min);

    printf("Digite a segunda hora (hora:min): ");
    scanf("%d:%d", &hora, &min);

    mins2 = minutos(hora, min);

    printf("A diferenca e' %d minutos.", mins2-minsl);
    //system("PAUSE");
    return 0;
}

/* minutos() */
/* retorna hora em minutos */
int minutos(int h, int m)
{
    return(h * 60 + m);
}
