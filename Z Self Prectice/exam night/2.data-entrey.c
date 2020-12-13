#include<stdio.h>

int main()
{
    int i , j ;
    int a[5] = { 1,2,3,4,5};

    int pos ;
    scanf("%d",&pos);
    int item;
    scanf("%d",&item);

    for(i = 5 ; i >= pos - 1 ; i--)
    {
        a[i]=a[i+1];
    }
    a[pos] = item;

    for(i = 0 ; i < 6 ; i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}
