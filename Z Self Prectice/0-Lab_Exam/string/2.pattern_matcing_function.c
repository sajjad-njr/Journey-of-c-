#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int patter(char str1[],char str2[],int len1, int len2, int max)
{
   int k = 0 , i = 0;
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
            return 1;
        }
    }
    if( i != len2)
    {
        return -1;
    }
}
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
    max = len1 - len2;

    patter(str1,str2,len1,len2,max);


    // printf("\n\tEnter Password string = ");
    if(i = len2)
        printf("\n\tPattern  Match ");
    else
        printf("\n\tPattern not Match ");


    //puts(str1);
    //puts(str2);

    return 0;
}

