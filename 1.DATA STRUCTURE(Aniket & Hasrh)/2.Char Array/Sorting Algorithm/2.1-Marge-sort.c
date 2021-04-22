#include<stdio.h>

void margeSort(int a[],int n);
void marge(int left[],int nL, int right[],int nR, int a[]);

int main()
{
    int i = 0 ;
    int n;
    scanf("%d",&n);
    int a[n];

    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }
    margeSort(a,n);

    printf("\n\tSorted Array = ");

    for(i = 0 ; i < n ; i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}

void margeSort(int a[],int n)
{
    if(n < 2) return ;
    int mid;
    mid = n/2;

    int i, left[mid], right[n-mid];

    for(i = 0 ; i < mid ; i++)
    {
        left[i] = a[i];
    }
    for(i = mid ; i < n ; i++)
    {
        right[i - mid] = a[i];
    }

    margeSort(left,mid);
    margeSort(right,n-mid);
    marge(left,mid,right,n-mid,a);
}

void marge(int left[],int nL, int right[],int nR, int a[])
{
    int i, j, k ;
    i = 0 ;
    j = 0 ;
    k = 0 ;

    while(i < nL && j < nR)
    {
        if(left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
        }
        k++;

    }
    while(i < nL)
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while(j < nL)
    {
        a[k] = right[j];
        j++;
        k++;
    }
}
