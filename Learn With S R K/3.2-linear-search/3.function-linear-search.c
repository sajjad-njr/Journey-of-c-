#include <stdio.h>

void LinearSearch(int A[] );

int main()
{
    int arr[10], i ;

    for(i = 0 ; i < 10 ; i++)
    {
        scanf("%d",&arr[i]);
    }

    LinearSearch(arr);
    return 0 ;
}

void LinearSearch(int A[])
{
    int data , i , flag = 0 ;
    printf("\nEnter searching data : ");
    scanf("%d",&data);

   for(i = 0 ; i < 10 ; i++)
    {
       if(A[i] == data)
       {
           printf("\n %d Data is Found %dth position ",data,i+1);
           flag = 1;
           break;
       }

    }

    if(flag == 0)
        printf("\n\t %d Data is not Found",data);

}
