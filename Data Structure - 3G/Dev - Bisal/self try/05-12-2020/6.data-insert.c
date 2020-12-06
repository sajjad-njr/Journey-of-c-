#include<stdio.h>
int main()
{
    int a[10];
    int i = 0,size,pos = 0,element = 0;

    printf("\n\tEnter size of array : ");
    scanf("%d",&size);

    printf("\n\tEnter element of array : ");

    for(i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }


    printf("\n\tenter the element of position : ");
    scanf("%d",&pos);

    printf("\n\tenter the element  data: ");
    scanf("%d",&element);

    if (pos < 0 || pos > size)
        printf("\n\twrong bro ");
    else
    {
        for(i = size - 1 ; i >= pos - 1; i--)
        {
            a[i+1] = a[i];
        }

        a[pos - 1] = element;
        size++;

        for(i = 0; i < size; i++)
        {
            printf("  %d  ",a[i]);
        }
    }

    return 0;
}

