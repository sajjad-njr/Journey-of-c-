#include<stdio.h>

int main()
{
    int a[50],size,i,element;
    printf("\nenter the array size : ");
    scanf("%d",&size);

    printf("\nEnter array element : \n ");
    for(i= 0; i < size ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter  insert  element :");
    scanf("%d",&element);



    /*for(i = size - 1 ; i >= pos - 1 ; i--)
    {
        a[i+1] = a[i];
    }
    */

    a[size] = element;
    size++;

    for(i= 0; i < size ; i++)
    {
        printf(" %d ",a[i]);
    }


    return 0;
}

