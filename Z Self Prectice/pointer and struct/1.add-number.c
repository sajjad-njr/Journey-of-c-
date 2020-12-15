#include<stdio.h>

int (*ptr) add(int c, int b)
{
    int a = c + b ;
    return a ;
}

