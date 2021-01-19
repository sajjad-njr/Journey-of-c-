#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100] , str2[100];
    int i ;

    printf("\n\tEnter string = ");
    gets(str1);

    for(i = 0 ; str1[i] != '\0' ; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] ='\0';

    printf("\n\t New string = %s",str2);

    return 0;
}
