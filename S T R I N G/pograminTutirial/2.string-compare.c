#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int i = 0 , len1 = 0 , len2=0 , same = 0;

    printf("\nstring 1 : ");
    gets(a);
    printf("\nstring 2 : ");
    gets(b);

    len1 = strlen(a);
    len1 = strlen(a);

    printf("\n\tLen = %d",len1);
    return 0;
}
