#include <stdio.h>
/*
Sheikh Yeasin Ahsanullah Al Galib
CSE Fall-2022
NUBTK
*/
int main()
{
    int n, i, X=0;
    char s[4];
    scanf("%i", &n);
    for (i=0; i<n; i++)
    {
        scanf("%s", s);
        if (s[1]=='+')
        X++;
        else
        X--;
    }
    printf ("%i",X);
    return 0;
}