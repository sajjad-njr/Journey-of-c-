#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int i = 0 , len1 = 0 , len2=0 , same = 0;

    printf("\nstring 1 : ");
    gets(a);
    printf("\nstring 2 : ");
    gets(b);

    len1 = strlen(a);
    len2 = strlen(b);

    if(len1 == len2)
    {
        while (i < len1)
        {
            if(a[i] == b[i])
            {
                i++;
            }
            else
            {
                break;
            }
        }
    }
    if(i == len1)
    {
        same = 1 ;
        printf("\n\tThe strings are same");
    }
    if(len1 != len2)
    {
        printf("\n\tString are not same");
    }
    if(same == 0)
    {
        if(a[i] > b[i])
        {
            printf("\n\tString 1 is bigger than 2");
        }
        else  if(a[i] < b[i])
        {
           printf("\n\tString 2 is bigger than 1");
        }
    }
    //printf("\n\tLen = %d",len1);
    return 0;
}
