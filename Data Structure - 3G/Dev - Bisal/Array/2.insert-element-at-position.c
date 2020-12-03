#include<stdio.h>

int main()
{
    int a[50],size,i ,element,pos;
    printf("\nenter the array size : ");
    scanf("%d",&size);

    printf("\nEnter array element : \n ");
    for(i= 0; i < size ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter  insert  element : \n ");
     scanf("%d",element);
}
