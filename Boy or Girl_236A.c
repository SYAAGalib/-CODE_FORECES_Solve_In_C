#include<stdio.h>
/*
Sheikh Yeasin Ahsanullah Al Galib
CSE Fall-2022
NUBTK
*/
int main()
{
    int a=0,i,j,f=0;
    char s[100];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(s[i]==s[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        a++;
        f=0;
        
    }
    if(a%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    
    return 0;
}