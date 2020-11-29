#include<stdio.h>
int main()
{
    int ar[5], i ;

    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&ar[i]);
    }
    int search, flag = 0 ;
    printf("\n\tEnter what you want =  ");

    scanf("%d",&search);

    for(i = 0 ; i < 5 ; i++)
    {
        if(ar[i] == search)
        {
            flag++;
            printf("\n\t %d Data is found  %d  at location ",search,i+1);
        }
    }

    if(flag == 0)
        printf("\n\tData is not found =  ");
    else
        printf("\n\t %d Data is found  %d times",search,flag);
    return 0;
}
