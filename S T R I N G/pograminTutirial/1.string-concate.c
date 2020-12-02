#include<stdio.h>

int main()
{
    char a[100],b[100],c[200];
    int i = 0, j = 0 ;

    printf("\n\tEnter string 1 : ");
    gets(a);
    printf("\n\tEnter string 1 : ");
    gets(b);

    while(a[i] != '\0')
    {
        c[j] = a[i];
        j++;
        i++;
    }
    i = 0;
    while(b[i] != '\0')
    {
        c[j] = b[i];
        j++;
        i++;
    }
    c[j] = '\0';

    printf("\n\n\t String Concatenate : ");
     puts(c);
    return 0;
}
