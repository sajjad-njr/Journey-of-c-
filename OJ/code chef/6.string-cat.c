#include<stdio.h>

int main()
{
    char str1[100] , str2[100];
    int i , j , c = 0 ;

    gets(str1);
    gets(str2);

    for(i = 0 ; str1[i] != '\0'  ; i++)c++;

    for(i = c , j = 0 ; str2[j] != '\0' ; i++ , j++ )
    {
        str1[i] = str2[j] ;

    }
    str1[i] = '\0';
    puts(str1);

    return 0;
}
