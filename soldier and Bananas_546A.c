#include <stdio.h>
/*
Sheikh Yeasin Ahsanullah Al Galib
CSE Fall-2022
NUBTK
*/
int main()
{
    long int k,n,w,total;
    scanf("%li %li %li",&k,&n,&w);

    total =k*((w*(w+1))/2);

    if( (total-n)>0)
      printf("%li",(total-n));
    else
        printf("0");

    return 0;
}