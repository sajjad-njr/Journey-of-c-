#include<stdio.h>

int main()
{
    int i , j ;
    int a[5] = { 1,2,3,4,5};

    int item;
    int pos ;

    scanf("%d",&pos);

    scanf("%d",&item);

    for(i = 4 ; i >= pos - 1 ; i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1] = item;

    for(i = 0 ; i < 5 ; i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}
