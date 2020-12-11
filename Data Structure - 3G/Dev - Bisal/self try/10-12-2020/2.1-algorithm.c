//find maximum value
#include<stdio.h>

int main()
{
    int a[5] = {67,89,99,554,32};
    int i , loc = 0 , max = a[0];

    for(i = 0 ; i < 5 ; i++)
    {
        if(a[i] > max)
        {
             max = a[i];
             loc = i;
        }
    }

    printf("\n\tThe maximum value is : %d and find position %d",max,loc+1);

    return 0;
}
