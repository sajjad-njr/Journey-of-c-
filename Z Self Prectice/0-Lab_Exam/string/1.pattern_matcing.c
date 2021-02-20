#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    printf("\n\tEnter Main string  = ");
    gets(str1);
    printf("\n\tEnter Password string = ");
    gets(str2);

    int  k = 0, i = 0,len1=0, len2=0, max = 0;
    len1 = strlen(str1);
    len2 = strlen(str2);
    max = len1-len2;

    while(k < max)
    {
        for( i = 0 ; i < len1 ; i++)
        {
            if(str2[i] != str2[k+i-1])
            {
                k++;
                break;
            }
        }
        if( i == len2)
        {
            printf("\n\tPattern Match at position = %d",i);
            break;
        }
    }
    if(i != len2)
        printf("\n\tPattern Match at position = ",);

    //puts(str1);
    //puts(str2);

    return 0;
}
