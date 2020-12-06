#include<stdio.h>
#include<string.h>

int main()
{
    char a[55],b[55],c[55];
    int  i = 0, j = 0, k = 0, l = 0;

    int x,x1,x2,x3;
    puts("\n\tEnter main string");
    gets(a);
    puts("\n\tEnter the word where you want : ");
    gets(b);

    puts("\n\tEnter the  position where you want to add : ");
    scanf("%d",&k);

    j=strlen(a);
    x2 =strlen(b);

    while(i<=j)
    {
        c[i] = a[i];
        i++;
    }
    x1 = x2 + j ;
    x3 = k + x2;

    for(i = k ; i < x1 ; i++)
    {
        x = c[i];

        if(l < x2)
        {
            a[i] = b[l];
            l = l+1 ;
        }
        a[x3] = x;
        x3 = x3+1;
    }
    //puts(a);

    printf("\n\tafter insert string : %s",a);

    return 0;
}
