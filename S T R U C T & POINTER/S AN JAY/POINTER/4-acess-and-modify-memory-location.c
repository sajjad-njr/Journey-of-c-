#include<stdio.h>

int main()
{
    int a = 5;
    int *p ;
    p = &a;

    a = a + *p;
    printf("\nThe value of a = %d",a);
    printf("\nThe value of a = %d",*p);

    *p = *p + a;
    printf("\n\n\n\n");
    printf("\nThe value of a = %d",a);
    printf("\nThe value of a = %d",*p);

    return 0;
}
