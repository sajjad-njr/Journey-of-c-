#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], ch;
    int i = 0,   count = 0 ;

    printf("\n\tEnter 1st string = ");
    gets(str);

    printf("\n\tEnter character = ");
    scanf("%c",&ch);

    int length = strlen(str);

    for(i = 0 ; i<length ; i++)
    {
        if(str[i] == ch)
        {

            count++;
        }
    }

    if(count == 0)
    {
        printf("\n\tThe  %c is not in the string !!",ch);
    }
    else
    {
        printf("\n\tThe occurrence %c is = %d",ch, count);
    }

    return 0;
}


