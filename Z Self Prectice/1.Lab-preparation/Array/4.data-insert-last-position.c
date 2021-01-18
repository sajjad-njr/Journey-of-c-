#include<stdio.h>

int main()
{
    int size, position, value ;
    printf("\n\tEnter the size of array = ");
    scanf("%d",&size);

    int a[size],i;
    printf("\n\tEnter the size of array = ");

    for(i = 0 ; i < size ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n\tEnter the value that insert = ");
    scanf("%d",&value);


    //insert  last  position ;

    a[size] = value;
    size++;

    printf("\n\tAfter Insert data new array = ");

    for(i = 0 ; i < size ; i++)
    {
        printf(" %d ",a[i]);  // if say add 5 all value (%d + 5);
    }

    return 0;
}



