#include<stdio.h>
int main()

{
    int arr[10] , i ;

    for(i = 0 ; i < 10 ; i++)
    {
        scanf("%d",&arr[i]);
    }

    int data , flag = 0 ;
    printf("\nEnter searching data : ");
    scanf("%d",&data);

   for(i = 0 ; i < 10 ; i++)
    {
       if(arr[i] == data)
       {
            printf("\n\tData is Found");
           flag = 1;

           break;
       }
       else
       {
            printf("\n\tData is not Found");
            break;
       }

    }

    /*if(flag == 0)
        printf("\n\tData is not Found");
    else
        printf("\nData is Found ");
    */
    return 0 ;
}

