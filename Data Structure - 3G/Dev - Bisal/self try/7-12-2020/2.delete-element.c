#include<stdio.h>

int main()
{
    int a[5]={34,56,78,90,35};
    int n = 5 , k ,j = 0 ,i,la,item;

    scanf("%d",&k);
    k = k - 1;
    for(j = k ; j < n -1 ; j++)
    {
        a[j] = a[j+1];
    }
    n = n - 1;

    for(i = 0 ; i < n ; i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}
