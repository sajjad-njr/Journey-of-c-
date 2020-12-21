#include<stdio.h>
int main()
{
    int a;
    int i,j,low;
    int b[100];

    scanf("%d",&a);
    for(i = 0 ; i < a ; i++)
    {
        scanf("%d",&b[i]);

    }


    for(i = 0 ; i < a ; i++)
    {
        low = b[i];
        for(j = 0 ; j < a - 1 ; j++ )
        {
            if(low[j] > b[j])
                low[j] = b[j];
        }

    }

    for(i = 0 ; i < a ; i++)
    {
        printf("\n\t%d",a[i]);

    }
    return 0;
}
