#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int i = 0, j = 0, k = 0,s,r,max = 0;

    gets(str1);
    gets(str2);

    r = strlen(str1);
    s = strlen(str2);

    max = r - s + 1;

    while(k <= max)
    {
        for(i = 0 ; i < s ; i++)
        {
            if(str2[i] != str1[k  + i - 1])
            {
                k++;
                break;
            }
        }
        if(i == s)
        {
            printf("\n\tsub string match at position : %d",k);
            break;
        }
    }
    if(i != s)
        printf("\n\tsub string not match  ");

    return 0;
}
