#include <stdio.h>
/*
Sheikh Yeasin Ahsanullah Al Galib
CSE Fall-2022
NUBTK
*/
int main()
{
    int n, p, v, t, s=0;
    scanf ("%i", &n);
    for (int i=0 ; i < n ; i++)
    {
        scanf ("%i %i %i", &p, &v, &t);
        if ((p==1 && v==1)||(v==1 && t==1)||(t==1 && p==1))
        s++ ;
    }
    printf("%d\n", s);
    return 0;
}