#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i, j, b = 0;
    int n[6];
    srand(time(NULL));
    n[0] = ((rand() % 60) + 1);
    for(i = 1; i < 6; i++)
    {
        n[i] = ((rand() % 60) + 1);
        for(j = (i - 1); j >= 0; j--)
        {
            if (n[j] == n[i])
            {
                n[i] = ((rand() % 60) + 1);
            }
        }
    }
    for(i = 0; i < 6; i++)
    {
        printf("%d\n",n[i] );
    }
    return 0;
}
