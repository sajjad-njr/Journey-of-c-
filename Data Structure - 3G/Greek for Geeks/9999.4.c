#include<stdio.h>

int main()
{

    int i, j, t ,n, temp ;

    printf("\n\t Enter size of array ");
    scanf("%d",&n);

    int a[n];

    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i = 0 ; i < n ; i++)
    {
        for( j = i ; j < n - 1 ; j++)
        {
            if(a[i] > a[j+1])
              {
                  temp = a[i];
                  a[i] = a[j + 1];
                  a[j + 1] = temp;
              }
        }
    }


    for(i = 0 ; i < n ; i++)
    {
        printf(" %d  ",a[i]);
    }

    return 0;
}
