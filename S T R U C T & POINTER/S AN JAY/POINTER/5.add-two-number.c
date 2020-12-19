#include<stdio.h>
int main()
{
    int a , b , c , *p1,*p2, p3;

    printf("Enter a number = ");
    scanf("%d %d",&a,&b);

    p1 = &a;
    p2 = &b;

    p3 = *p1 + *p2;
    printf("\nsum = %d",p3);
    return 0;
}
