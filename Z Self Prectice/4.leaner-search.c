#include<stdio.h>
int main()
{
    int ar[5], i ;

    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&ar[i]);
    }

    int search, flag = 0 ;
    printf("\n\tEnter search value =  ");

    scanf("%d",&search);

    for(i = 0 ; i < 5 ; i++)
    {
        if(ar[i] == search)
        {
            flag++;
            printf("\n\t %d is found at location %d",search,i+1);
        }
    }

    if(flag == 0)
        printf("\n\tItem is found");
    return 0;
}
