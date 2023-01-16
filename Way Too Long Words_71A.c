#include <string.h>
#include <stdio.h>
/*
Sheikh Yeasin Ahsanullah Al Galib
CSE Fall-2022
NUBTK
*/
int main()
{
    int i, length, n;
    char s[100];
    scanf("%i", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", s);
        length = strlen(s);
        (length>10)?
        printf("%c%i%c",s[0],length-2,s[length-1]): printf("%s", s);
        printf("\n");
    }
    return 0;
}
