#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100];
    int str1_len , str2_len;

    gets(str1);
    gets(str2);
    str1_len = strlen(str1);
    str2_len = strlen(str2);

    int  l , k = 0, max = str1_len - str2_len ;

    while(k <= max)
    {
       for(l = 0 ; l < str1_len ; l++)
       {
           if(str2[l] != [k + l - 1])
           {
               k++;
               break;
           }
       }
       if(l == str2_len )
       {

       }
    }

    printf(" %d %d ",str1_len,str2_len);
    return 0;
}
