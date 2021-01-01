#include<stdio.h>

int main()
{
    int a[1000];
    int i, j, t , temp ;


    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i = 0 ; i < 5 ; i++)
    {
        for( j = i ; j < 4 ; j++)
        {
            if(a[i] > a[j+1])
              {
                  temp = a[i];
                  a[i] = a[j + 1];
                  a[j + 1] = temp;
              }
        }
    }


    for(i = 0 ; i < 5 ; i++)
    {
        printf(" %d  ",a[i]);
    }

    return 0;
}
