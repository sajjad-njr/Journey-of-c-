#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100], str3[100] ;

    int i = 0,  str1_len = 0,str2_len = 0,position = 0, l = 0 ;
    int x,x1,x2,x3,x4;

    printf("\n\tEnter Main string = ");
    gets(str1);

    printf("\n\tEnter The SUB string = ");
    gets(str2);

    printf("\n\tEnter the INSERT position = ");
    scanf("%d",&position);

    str1_len = strlen(str1);
    str2_len = strlen(str2); // str2 = sub;

    while(i <= str1_len)
    {
        str3[i] = str1[i];
        i++;
    }
    int total_len = str1_len + str2_len;
     x = str2_len + position; // x = sub_len

    for(i = position ; i < total_len ; i++)
    {
        x1 = str3[i];

        if(l < str2_len)
        {
            str1[i] = str2[l];
            l = l + 1 ;
        }
        str1[x] = x1;
        x = x + 1 ;
    }
    puts(str1);
    return 0;
}
