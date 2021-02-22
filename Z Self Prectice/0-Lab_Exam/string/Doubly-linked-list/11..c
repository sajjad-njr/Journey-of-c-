#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];

    gets(str);

    int i, coutAlpa = 0,  coutnDigit = 0,coutSpecial = 0 ;
    for(i = 0 ; str[i] != '\0' ; i++)
    {

        if( str[i] >= 'A' && str[i] <= 'Z')
        {
            coutAlpa++;
        }

    }

    printf("%d",coutAlpa+1);

    return 0;

}


