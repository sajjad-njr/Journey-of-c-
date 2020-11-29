#include<stdio.h>
int main()
{
    int ar[20], i ;

    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&ar[i]);
    }
    int search , flag = 0 ;

    for(i = 0 ; i < 5 ; i++)
    {
        printf("%d",ar[i]);
    }
    return 0;
}
