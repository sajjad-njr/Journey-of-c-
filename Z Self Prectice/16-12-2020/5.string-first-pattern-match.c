#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100] , str2[100];
    gets(str1),gets(str2);

    int str1_len = strlen(str1);
    int str2_len = strlen(str2);

    int max = str1_len - str2_len ;

    printf("\n\tTotal len = %d",max);
    return 0;

}

