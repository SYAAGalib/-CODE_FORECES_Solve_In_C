#include<stdio.h>
#include<string.h>
/*
Sheikh Yeasin Ahsanullah Al Galib
CSE Fall-2022
NUBTK
*/
int main()
{

    char s[101];
    int i,j,len,lower=0,upper=0;
    while(scanf("%s",s)!=EOF)
    {
        len=strlen(s);
        for(i=0; i<len; i++)
        {
            if(s[i]>='a'&&s[i]<='z')
                lower++;
            else if(s[i]>='A'&&s[i]<='Z')
                upper++;
        }
        if(lower>upper)
        {
            printf("%s\n",strlwr(s));
        }
        else if(lower<upper)
        {
            printf("%s\n",strupr(s));
        }
        else if(lower==upper)
        {
            printf("%s\n",strlwr(s));
        }
        lower=0,upper=0;
    }

}