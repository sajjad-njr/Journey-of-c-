#include<stdio.h>
int main()
{
    int *ptr ;
    int i = 9 ;
    ptr = &i;
    printf(" good = %d",i);
    printf("\n1 good = %d",&i);

    printf("\n1 good = %d",&ptr);
    printf("\n1 good = %d",*ptr);


     printf("\n1 good = %d",*(&i));

     return 0;
}
