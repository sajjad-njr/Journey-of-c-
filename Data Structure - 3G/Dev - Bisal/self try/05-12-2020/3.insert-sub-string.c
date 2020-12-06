#include<stdio.h>
#include<string.h>

int main()
{
    char a[55],b[55],c[55];
    int  i = 0 , j = 0 , k = 0 , l = 0;

    int x,x1,x2,x3;
    puts("\n\tEnter main string");
    gets(a);
    puts("\n\tEnter the word where you want : ");
    gets(b);

    j=strlen(a);
    x2 =strlen(b);

    while(i<=j)
    {
        c[i] = a[i];
        i++;
    }

    return 0;
}
