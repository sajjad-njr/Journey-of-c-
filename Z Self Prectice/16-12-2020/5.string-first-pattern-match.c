#include<stdio.h>
#include<string.h>


int main()
{
    char str1[100] , str2[100];
    gets(str1),gets(str2);

    int str1_len = strlen(str1);
    int str2_len = strlen(str2);

    int max = str1_len - str2_len , k = 0 , i=0 ;

    while(k<= max)
    {
        for( i = 0 ; i < str1_len ; i++)
        {
            if(str2[i] != str1[k+i-1])
            {
                k++;
                break;
            }
        }
        if(i == str2_len)
        {
            printf("\n\tItem is found = %d",k);
        }
    }
    if(i != str2_len)
    {
        printf("\n\tItem is not found");
    }
   // printf("\n\tTotal len = %d",max);
    return 0;

}

