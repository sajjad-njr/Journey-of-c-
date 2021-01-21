#include<stdio.h>

int main()
{
    int size;
    printf("\n\tEnter the size of array = ");
    scanf("%d",&size);

    int  DATA[size] , pos = 0;

    printf("\n\tEnter the value of array = ");

    for(int i = 0 ; i < size ; i++)
    {
        scanf("%d",&DATA[i]);
    }

    int max = DATA[0];

    for(int i = 0 ; i < size ; i++)
    {
         if(max < DATA[i])
         {
             max = DATA[i];
             pos = i ;
         }
    }
    printf("\n\tMaximum value is = %d",max);

    printf("\n\tMaximum value is find = %d",pos+1);

    return 0;

}
