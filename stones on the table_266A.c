#include <stdio.h>
/*
Sheikh Yeasin Ahsanullah Al Galib
CSE Fall-2022
NUBTK
*/
int main()
{
    int a=0, n, i;
    scanf("%i",&n);
    char s[n];
    scanf("%s",s);
    for (i=0; i<n; i++)
    if(s[i-1]==s[i])
    a++;
    printf("%i\n",a);
    return 0;
}