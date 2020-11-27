#include<stdio.h>

void main()
{
    char s1[20],s2[20];

    int i , j , c = 0 ;
    printf("\nEnter 1st line : ");
    gets(s1);

    printf("\nEnter 2nd line : ");
    gets(s2);

    for(i = 0 ; s1[i] !='\0' ; i++)
        c++;

    s1[c] = ' ';
    c++;

    for(i = c , j = 0 ; s2[i] != '\0' ; i++ , j++)
    {
        s1[i] = s2[j];
        c++;
    }
    s1[i] = '\0';

    printf("Cat string = %s",s1);

}

