#include <stdio.h>
/*
Sheikh Yeasin Ahsanullah Al Galib
CSE Fall-2022
NUBTK
*/
int main() 
{
    int n, k, i, a[50], next=0;
    scanf("%i%i", &n, &k);
    for (i = 0; i < n; i++)
    scanf("%i", &a[i]);
    for (i = 0; i < n; i++)
    {
        if (a[i] >=a[k-1] && a[i] >0)
        next++;
    }
    printf("%i\n", next);
    return 0;
}