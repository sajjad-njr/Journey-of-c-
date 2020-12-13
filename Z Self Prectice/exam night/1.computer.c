#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,len= 0;
    char str1[100],str2[100];

    gets(str1);
    gets(str2);

    len = strlen(str1);
    i = len;

    for(i=len , j = 0 ; str2[j] != '\0'; i++,j++)
    {
        str1[i] = str2[j];

    }
    str1[i] = '\0';

    puts(str1);

    return 0;
}
