#include<stdio.h>

int main()
{
    char str[100];
    int i , count = 0 ;

    printf("\nEnter a line: ");
    gets(str);

    for(i=0 ; str[i] != '\0' ; i++ )
    {
        count++;
    }

    printf("\nLength : %d",count);

    return 0;
}
