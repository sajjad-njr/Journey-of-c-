//vowel and consonant

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i;

    printf("\n\tEnter string = ");
    gets(str);

    for(i=0 ; str[i] != '\0' ; i++)
    {
        //upper to lower convert
        if(str[i] >= 'A' && str[i]<= 'Z')
        {
            str[i] = str[i] + 32;
        }

        //lower to upper
        else
        {
            if(str[i] >= 'a' && str[i]<= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
    }
    printf("\n\tNew string = %s",str);
    return 0;
}

