#include<stdio.h>
int main()
{
    int a,i ;
    int b;
    scanf("%d",&b);

    while(b--)
    {
        scanf("%d",&a);
        if(a == 42)
            break;
        else

            for(i = 0 ; i!= 4 ; i++)
            {
                printf(" %d ",i);
            }
        printf("\n");
    }
    return 0;
}
