#include<stdio.h>

int main()
{
    int a[50],size,i,element,pos;
    printf("\nenter the array size : ");
    scanf("%d",&size);

    printf("\nEnter array element : \n ");
    for(i= 0; i < size ; i++)
    {
        scanf("%d",&a[i]);
    }

    int item;
    int pos ;

    scanf("%d",&pos);

    scanf("%d",&item);

    for(i = 5 ; i >= pos - 1 ; i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1] = item;

    for(i = 0 ; i < 6 ; i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}

