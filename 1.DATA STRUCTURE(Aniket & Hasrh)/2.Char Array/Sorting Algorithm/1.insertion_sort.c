#include<stdio.h>


int insertionSort(int a[],int n );

int ak()
{
    int n = 0, i =0 ;
    printf("\nEnter the size of Array = ");
    scanf("%d",&n);

    int a[n];

    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    insertionSort(a,n);

    for(i = 0 ; i < n ; i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}

int insertionSort(int a[], int n)
{
    int i, temp, indexSorted = 0;

    for(i = 1 ; i < n ; i++)
    {
        temp = a[i];
        indexSorted = i - 1;

        while(a[indexSorted] > temp && indexSorted > -1)
        {
            a[indexSorted+1] = a[indexSorted];
            indexSorted--;
        }
        a[indexSorted+1] = temp;
    }
    // return 1;
}
