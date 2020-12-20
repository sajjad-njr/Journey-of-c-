#include<stdio.h>
int main()
{
    int a,i ;
    int b;
    //scanf("%d",&b);

    /* while(b--)
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
     */
    for(int j = 0 ; j < 10 ; j++)
    {
        for(int i = 0 ; i < 100 ; i++)
        {
            printf(" %d ",i+1);
        }
        printf("\n");
        printf("\n");

        for(int i = 0 ; i < 100 ; i++)
        {
            if(i%2 == 0)
                printf(" %d ",i);
        }
        if(j == 8 )
            printf("\n\n\nsajjjjjjjjjjjjjjjjjjjjjjjjjjad\n");
    }
    return 0;
}
