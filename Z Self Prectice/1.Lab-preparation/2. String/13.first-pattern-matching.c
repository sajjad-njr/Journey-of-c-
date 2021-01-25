#include<stdio.h>
#include<string.h>

int main()
{
    int k = 0 ;
    int  Max, str1_len = 0,str2_len = 0,position = 0, l = 0 ;

    char str1[100], str2[100];

    gets(str1);
    gets(str2);

    str1_len = strlen(str1);
    str2_len = strlen(str2);

    Max = str1_len - str2_len;

    while( k <= Max)
    {
        for( l = 0 ; l < str1_len ; l++)
        {
           if(str2[l] != str1[k + l - 1])
            {
                k++;
                break;
            }
        }
        if(l == str2_len)
        {
            printf("\n\tPattern is found in the position = %d",k-1);
            break;
        }
    }

    if(l != str2_len)
    {
        printf("\n\tPattern is not found ");

    }

    return 0;
}
