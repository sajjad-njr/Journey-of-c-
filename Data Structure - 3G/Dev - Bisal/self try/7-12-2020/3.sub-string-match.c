#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int i = 0 , j = 0 , k = 0 ,s,r,max = 0;

    gets(str1);
    gets(str2);

    r = strlen(str1);
    s = strlen(str2);

    max = r - s + 1;

    return 0;
}
