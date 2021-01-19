#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int length = 0;

    printf("\n\tEnter string = ");
    gets(str);

    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        length++;
    }

   printf("\n\tTotal Length of string = %d",length);

    return 0;
}

