#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100],c[100];
    int i = 0, j = 0 , k = 0 , l =0 ;
    int x,x1,x2,x3;

    puts("\tenter a main string");
    gets(a);

    puts("\tenter sub string");
    gets(b);

    printf("\nEnter position where you want to add =");
    scanf("%d",&k);

    j = strlen(a);
    x2 = strlen(b);

    while(i <= j)
    {
        c[i] = a[i];
        i++;
    }
    x1 = j + x2;
    x3 = x2 + k;

    for(i = k ; i < x1 ; i++)
    {
        x = c[i];
        if(l < x2)
        {
            a[i] = b[l];
            l = l + 1;
        }
        a[x3]=x;
        x3 = x3 + 1;
    }

    printf("\n\tnew string : %s",a);
    return 0;
}
