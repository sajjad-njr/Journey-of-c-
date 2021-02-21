//Delete from 1st INDEX
#include<stdio.h>

int main()
{
    int i = 0 , size;
    printf("\n\tEnter size of array = ");
    scanf("%d",&size);

    int ARRAY[size];

    for(i = 0 ; i < size ; i++)
    {
        scanf("%d",&ARRAY[i]);
    }

     //increment index value i = 1

     for(i = 1 ; i < size ; i++)
    {
        printf(" %d ",ARRAY[i]);
    }
    return 0;
}

