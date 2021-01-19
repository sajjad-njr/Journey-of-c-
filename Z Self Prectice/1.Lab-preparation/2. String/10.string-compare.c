//string compare
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i = 0,  f = 0 ;

    printf("\n\tEnter 1st string = ");
    gets(str1);

    printf("\n\tEnter 2nd string = ");
    gets(str2);

    for(i = 0 ; str1[i] != '\0'  || str2[i] != '\0'; i++)
    {
        if(str1[i] != str2[i])
        {
            f = 1;
            break;
        }
    }

    if(f==0)
    {
        printf("\n\tString are same !!");
    }
    else
    {
        printf("\n\tString are not  same !!");
    }

    return 0;
}

