#include <stdlib.h>
/*
Sheikh Yeasin Ahsanullah Al Galib
CSE Fall-2022
NUBTK
*/
int main()
{
    long n, s;
    scanf("%li", &n);
    s=n/5;
    if (n%5==0) 
    {
        printf("%li\n", s);
    }
    else
    {
        printf("%li\n", s+1);
    }
    return 0;
}