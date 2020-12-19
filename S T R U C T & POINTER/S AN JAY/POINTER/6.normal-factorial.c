#include<stdio.h>

int main()
{
    int i, n ,t;
    printf("enter a number ");
    scanf("%d",&n);
    while(n--)
    {
        int f = 1;
        scanf("%d",&t);

        for(i = 1 ; i <= t; i++)
        {
            f = f * i;
        }
         printf("%d\n",f);
    }

    return 0;
}
