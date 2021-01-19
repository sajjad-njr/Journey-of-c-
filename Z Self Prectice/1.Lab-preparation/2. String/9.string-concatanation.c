//string concatenaion
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i = 0 , length = 0 ;

    printf("\n\tEnter 1st string = ");
    gets(str1);

    printf("\n\tEnter 2nd string = ");
    gets(str2);

    for(i = 0 ; str1[i] != '\0' ; i++)
    {
        length++;
    }

    //more extra space add
    //str1[length] = ' ';
    //length++;

    for(i = 0 ; str2[i] != '\0' ; i++)
    {
        str1[length] = str2[i];
        length++;
    }
    str1[length] = '\0';

    printf("\n\tstring concatenation = %s",str1);
    return 0;
}
