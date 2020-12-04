#include<stdio.h>

int main()
{
    char a[20],b[20];
    int i = 0, j = 0 ;

    gets(a);
    gets(b);

    while(a[i] != '\0')
    {
        if(a[i] == b[0])
        {
            j = 1 ;
            while(b[j] != '\0' && a[j+i] != '\0' || b[j]==a[j+1])
            {
                j++;
            }
            if(b[j] == '\0')

                printf("\n\tsub string found at %d position ",i+1);
        }
        i++;
    }

    return 0;
}
