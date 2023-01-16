#include <stdio.h>
#include <string.h>
/*
Sheikh Yeasin Ahsanullah Al Galib
CSE Fall-2022
NUBTK
*/
void capital( char s[100])
{
    for (int i=0; s[i]!='\0'; i++)
    {
        if (s[i]>=97)
        s[i] = s[i]-32;
    }
}

int main()
{
    char s[100], a[100];
    gets (s);
    gets (a);
    capital (s);
    capital (a);
    int i=strcmp (s, a);
    printf ("%i", i);
    return 0;
}