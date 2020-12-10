#include<stdio.h>
int main()
{
    int a[5] = {45,67,87,98,54};
    int n = 5;
    printf("\n\tbefore delete array : \n");

    for(i = 0 ; i < n ; i++)
    {
        printf("  %d  ",a[i]);
    }

    int pos = 0;
    printf("\n\tEnter position where you want to delete : ");
    scanf("%d",&pos);

    printf("\n\tbefore delete array : \n");

    for(i = pos ; i < 5 ; i++)
    {
        a[i+1] = a[i];
    }
    n = n - 1 ;
    for(i = 0 ; i < n ; i++)
    {
        printf("  %d  ",a[i]);
    }
    return 0;
}
