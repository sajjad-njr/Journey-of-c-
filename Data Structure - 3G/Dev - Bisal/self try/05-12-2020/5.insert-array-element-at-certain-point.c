#include<stdio.h>
int main()
{
    int a[10];
    int i = 0,size,data,count = 0;

    scanf("%d",&size);
    printf("\n\tEnter element of array : ");

    for(; i < size; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n\tinter the searching data  : ");
    scanf("%d",&data);

    for(i = 0 ; i < size; i++)
    {
        if(a[i] == data)
        {
            count = 1;
            break;
        }


    }
    if(count == 0)
        printf("\n\twrong data ");
    else
        printf("\n\t data found at position %d",i+1);
    return 0;
}
