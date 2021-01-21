#include<stdio.h>

int main()
{
    int size;
    printf("\n\tEnter the size of array = ");
    scanf("%d",&size);

    int  DATA[size], pos = 0;

    printf("\n\tEnter the value of array = ");

    for(int i = 0 ; i < size ; i++)
    {
        scanf("%d",&DATA[i]);
    }

    int item ;
    printf("\n\tEnter item = ");
    scanf("%d",&item);


    for(int i = 0 ; i < size ; i++)
    {
        if(item ==  DATA[i])
        {
            pos = i ;
        }
    }

    if(pos == 0)
    {
        printf("\n\tItem is not in the DATA");
    }
    else
    {
        printf("\n\tDATA is found in the position = %d",pos+1);
    }

    return 0;

}

