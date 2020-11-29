#include<stdio.h>
int main()
{
    int ar[5], i;
    for(i = 0 ; i < 5; i++)
    {
        scanf("%d",&ar[i]);
    }

   int item , count = 0;
    printf("\nsearch item = ");
    scanf("%d",&item);

    for(i = 0 ; i <  5 ; i++)
    {
        if(ar[i] == item);
        {
            count++;
            break;
        }
    }
    if(count == 0)
        printf("\nitem  not found ");
    else
        printf("\n item found at ="   );

    return 0;
}
