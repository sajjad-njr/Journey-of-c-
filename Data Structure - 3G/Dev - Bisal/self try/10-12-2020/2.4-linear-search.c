#include<stdio.h>
int main()
{
    int data[100];
    int i,k, item, loc = 0;

    printf("\n\tEnter the size of a array : ");
    scanf("%d",&k);
    printf("\n\tEnter the elemrnt of a array : ");

    for(i = 0 ; i < k ; i++ )
    {
        scanf("%d",&data[i]);

    }
    printf("\n\tEnter the search item : ");
    scanf("%d",&item);

    for(i = 0 ; i < k ; i++ )
    {
        if(data[i] == item)
        {
            loc =  i ;
            break;
        }
    }

    if(loc == 0)
        printf("\n\t:Item is not found ");
    else
        printf("\n\t %d is the location of item = %d",loc+1,item);
    return 0;
}
