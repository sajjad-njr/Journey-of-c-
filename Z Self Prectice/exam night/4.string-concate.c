#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i , j , len = 0 ;
    printf("\nEnter two strings = ");
    gets(str1);
    gets(str2);

    for(i = 0 ; str1[i] != '\0' ; i++)
    {
        len = len + 1;

    }

    return 0;
}
