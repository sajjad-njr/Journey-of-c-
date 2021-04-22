#include<stdio.h>

int BinarySearch(int X[], int n, int Xm);

void main()
{
    int n,flag ;

    printf("Enter the size of array = ");
    scanf("%d",&n);

    int X[n];

    printf("\nEnter the sorted element of the array= ");
    for(int i = 1 ; i <= n ; i++)
    {
        scanf("%d",&X[i]);
    }
    printf("\nEnter searching element= ");
    int Z ;
    scanf("%d",&Z);

    flag = BinarySearch(X,n,Z);

    if(flag == 1)
    {
        printf("\nFOUND");
    }
    else
    {
        printf("NOT FOUND\n");
    }

}
int BinarySearch(int X[], int n, int Z)
{
    int l = 1;
    int h = n ;
    int flag = 0;
     while( l <= h && flag == 0)
    {
        int mid = (l+h)/2;
        int Xm = X[mid];

        if(Xm < Z)
        {
            l = mid + 1;
        }
        else if (Xm > Z)
        {
            h = mid - 1;
        }
        else
        {
            flag = 1;
        }
    }

    if(flag == 1)
    {
        return 1;
    }
    else
        return -1;
}



