#include<stdio.h>

int main()
{
    char a[10],b[10];
    int i = 0, j = 0 ;

    gets(a);

    for(i = 6 ; a[i] !='\0' ; i--)
    {
        b[j] = a[i];
    }
    b[j] = '\0';

    puts(b);

    return 0;
}
