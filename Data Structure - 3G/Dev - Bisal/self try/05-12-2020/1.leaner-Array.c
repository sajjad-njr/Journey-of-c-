#include<stdio.h>
int main()

{
    int a[10],i,j,data,flag = 0 ;
    int n ;

    printf("\n\tEnter size of array : ");
    scanf("%d",&n);

    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n\tEnter searching data: ");
    scanf("%d",&data);

    for(i = 0 ; i < n ; i++)
    {
        if( data == a[i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("\ndata not found ");
    else
        printf("\n\tData found at positi");

    return 0;

}
