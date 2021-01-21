#include<stdio.h>

int main()
{
    int size;
    printf("\n\tEnter the size of array = ");
    scanf("%d",&size);

    int  DATA[size];

    printf("\n\tEnter the value of array = ");

    for(int i = 0 ; i < size ; i++)
    {
        scanf("&d",&DATA[i]);
    }

    int max = DATA[0];

}
