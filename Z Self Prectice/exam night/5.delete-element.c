#include<stdio.h>
int main()
{
    int a[50], i , size, pos ;
    scanf("%d",&size);
    for(i = 0 ; i < size ; i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&pos);
    for(i = pos - 1 ; i < size ; i++)
    {
        a[i] = a[i+1];
    }


    for(i = 0 ; i < size - 1 ; i++)
    {
         printf(" %d ",a[i]);
    }
    return 0;
}
