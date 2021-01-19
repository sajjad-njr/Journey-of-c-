#include<stdio.h>

int main()
{
    int size, position, value ;
    printf("\n\tEnter the size of array = ");
    scanf("%d",&size);

    int a[size],i;


    for(i = 0 ; i < size ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n\tEnter the position that delete = ");
    scanf("%d",&position);



    if(position <= 0 || position > size)
    {
        printf("\nInvalid Position ");
    }
    else
    {
        for(i = position - 1  ; i < size -1  ; i++)
        {
            a[i] = a[i+1];  //  after position data move 1 position
        }
        size--;
    }

    printf("\n\tAfter  delete data new array = ");

    for(int j = 0 ; j < size ; j++)
    {
        printf(" %d ",a[j]);
    }

    return 0;
}




