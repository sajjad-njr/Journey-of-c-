//string reverse
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100] , str2[100];

    int i;

    printf("\n\tEnter string = ");
    gets(str);

    int len = strlen(str);

    for( i = len-1 ; i >= 0 ; i--)
    {
        printf("%c",str[i]);
    }

    return 0;
}

