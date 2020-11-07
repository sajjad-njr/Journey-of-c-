#include<stdio.h>

int main()
{
    int marks[10] , i , sum ;

    for(i = 0 ; i < 10 ; i++)
    {
        printf("Enter your marks =  ");

        scanf("%d",&marks[i]);

        sum += marks[i];
    }

    printf("Sum = %d", marks);
    return 0 ;
}
