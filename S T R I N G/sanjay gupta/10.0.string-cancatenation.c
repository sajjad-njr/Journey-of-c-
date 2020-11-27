#include<stdio.h>

void main()
{
    char s1[20],s2[20];

    int i = 0 , c = 0 ;
    printf("\nEnter 1st line : ");
    gets(s1);

    printf("\nEnter 2nd line : ");
    gets(s2);

    for(i = 0 ; s1[i] !='\0' ; i++)
        c++;

    s1[c] = ' ';
    c++;

    for(i = 0 ; s2[i] != '\0' ; i++)
    {
        s1[c] = s2[i];
        c++;
    }
    s1[c] = '\0';

    printf("Cat string = %s",s1);

}
