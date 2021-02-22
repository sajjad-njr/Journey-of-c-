#include<stdio.h>

int main()
{
    int m , n ;
    printf("\n\tEnter row and colum  = ");
    scanf("%d%d",&m,&n);
    int size = m * n;

    int i , j , a[m],b[n];

    for(i = 0 ; i < m ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            scanf("%d",&a[j]&b[j]);
        }
    }

    for(i = 0 ; i < size ; i++)
    {
         printf("%d",a[i]b[i]);
    }
}
