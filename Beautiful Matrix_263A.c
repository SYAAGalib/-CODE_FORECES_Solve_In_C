#include<stdio.h>
#include<math.h>
/*
Sheikh Yeasin Ahsanullah Al Galib
CSE Fall-2022
NUBTK
*/
int main()
{
    int a[6][6], i, j, r, c;
    for(i=1 ; i<6 ; i++)
    {
        for(j=1 ; j<6 ; j++)
        {
            scanf("%i", &a[i][j]);
            if(a[i][j]==1)
            {
                r=abs(3-i);
                c=abs(3-j);
                printf("%i", r+c);
            }
        }
    }
    return 0;
}
