#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];

    int  up_len = 0, low_len = 0, num_len = 0, sp_len = 0 ;

    printf("\n\tEnter string = ");
    gets(str);

    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] >='A' && str[i] <= 'Z')
        {
            up_len++;
        }
        else
        {
            if(str[i] >='a' && str[i] <= 'z' )
            {
                low_len++;
            }
            else
            {
                if(str[i] >= '0' && str[i] <= '9')
                {
                    num_len++;
                }
                else
                {
                    sp_len++;
                }
            }
        }
    }

    printf("\n\tTotal UPPER CASE of string = %d",up_len);

    printf("\n\tTotal LOWER CASE of string = %d",low_len );

    printf("\n\tTotal NUMBER CASE of string = %d",num_len );

    printf("\n\tTotal SPECIAL CASE of string = %d",sp_len );

    return 0;
}


