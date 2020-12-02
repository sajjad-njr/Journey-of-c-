#include<stdio.h>

int main()
{
    char a[20] , b[20];
    int i , f = 0 ;

    gets(a);
    gets(b);

    for(i = 0 ; a[i] != '\0' || b[i] != '\0' ; i++)
    {
        if(a[i] != b[i])
            f =  1;
            break;

    }
    if(f==0)
        printf("\n\tstring are same ");
    else
        printf("\n\tstring are no same ");

    return 0;
}
