#include<stdio.h>

int main()
{
    char a[20], b[20];
    int a1 = 0,i = 0 ,j = 0;

    gets(a);
    gets(b);

    for(i = 0 ; a[i] != '\0' ; i++)
    {
        a1++;
    }

    for(i = a1 , j ; b[j] != '\0' ; i++, j++)    {
         a[i] = b[j];
    }
    a[i] = '\0';


    printf("%s",a);
    return 0;

}
