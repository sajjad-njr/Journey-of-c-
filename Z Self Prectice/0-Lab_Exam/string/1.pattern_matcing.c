#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int  k = 0, i = 0,len1 = 0, len2 = 0, max = 0;
    printf("\n\tEnter Main string  = ");
    gets(str1);
    printf("\n\tEnter Password string = ");
    gets(str2);


    len1 = strlen(str1);
    printf("\nstring len = %d",len1);
    len2 = strlen(str2);
    max = len1 - len2 + 1;

    while(k <= max)
    {
        for( i = 0 ; i < len1 ; i++)
        {
            if(str2[i] != str1[k+i])
            {
                k++;
                break;
            }
        }
        if( i == len2)
        {
            printf("\n\tPattern Match at position = %d",k-1);
            break;
        }
    }
   // printf("\n\tEnter Password string = ");
    if(i != len2)
        printf("\n\tPattern not Match ");

    //puts(str1);
    //puts(str2);

    return 0;
}
