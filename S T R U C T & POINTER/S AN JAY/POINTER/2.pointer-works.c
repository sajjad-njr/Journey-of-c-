#include<stdio.h>
int main()
{
    int a = 9 ;
    int *p;
    p = &a;
    printf("\nEnter a value = %d",a);
    printf("\nEnter a value = %d",*p);

    printf("\nEnter a value = %p",&a);
    printf("\nEnter a value = %p",p);

    return 0;
}
