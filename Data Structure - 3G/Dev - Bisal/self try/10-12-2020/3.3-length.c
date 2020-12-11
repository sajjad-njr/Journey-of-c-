#include<stdio.h>

int main()
{
    char data[100];
    int count = 0 ;
    printf("\n\tEnter a string = ");
    gets(data);

    for( int i = 0 ; data[i] != '\0' ; i++ )
    {
        count++;
    }

    printf("\n\t total length of string = %d",count);
    return 0;
}
