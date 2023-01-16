#include <stdlib.h>
/*
Sheikh Yeasin Ahsanullah Al Galib
CSE Fall-2022
NUBTK
*/
int main()
{
    int a, b, y=0;
    scanf("%i%i", &a,&b);
    while (1)
    {
        y++;
        a=a*3;
        b=b*2;
        if (a>b)
        {
            printf("%i", y);
            break;
        }
    }
    return 0;
}