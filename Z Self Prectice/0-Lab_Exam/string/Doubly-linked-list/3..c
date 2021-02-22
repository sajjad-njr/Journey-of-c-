#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("\n\tEnter an string with digit and special charecters = ");
    gets(str);

    int i, coutAlpa = 0,  coutnDigit = 0,coutSpecial = 0 ;
    for(i = 0 ; str[i] != '\0' ; i++)
    {
       if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            coutAlpa++;
        }
        else
        {
            if(str[i] >= '0' && str[i] <= '9')
            {
                coutnDigit++;
            }
            else
            {
                coutSpecial++;
            }
        }
    }

    printf("\nDigits  in the string = %d",coutnDigit);
    printf("\nSpecial Char  in the string = %d",coutSpecial);
    return 0;

}



