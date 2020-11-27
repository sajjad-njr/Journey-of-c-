#include<stdio.h>

void main()
{
    char str[100];

    int i, ch = 0, space = 0;

    printf("\nEnter a line = ");
    gets(str);

    for(i = 0 ; str[i] != '\0'; i++)
    {
        ch++;

        if(str[i] == ' ' )
            space++;
    }

    printf("\nTotal Character : %d",ch);
    printf("\nTotal Words : %d",space+1);
}
