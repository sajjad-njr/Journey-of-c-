#include<stdio.h>

int *add (int c, int b)
{
    int a;
    a = c + b ;
    return a ;
}

int main()
{
    int  a = 5 , b = 7 , f;

    int *c;
    c = &add ;

    f = c(5,7);

    printf("%d",c);
}
