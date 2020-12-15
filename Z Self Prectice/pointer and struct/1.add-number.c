#include<stdio.h>

int add (int *c, int *b)
{
    int a;
    a = *c + *b ;
    return a ;
}

int main()
{
    int  a = 50 , b = 7 , f;

    int c;
    c = add(&a,&b);

    printf("%d",c);

    return 0;
}
