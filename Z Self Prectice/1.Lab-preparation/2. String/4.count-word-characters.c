#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];

    int i , count_word = 0 , count_charac = 0 ;

    printf("\n\tEnter string = ");
    gets(str);

    for( i = 0 ; str[i] != '\0' ; i++)
    {
        count_charac++; // special count

        if(str[i] ==' ')
        {
            count_word++; //word count
        }
    }
    printf("\n\tTotal characters of the string = %d",count_charac);

    printf("\n\tTotal word of the string = %d",count_word+1);

    return 0;
}
