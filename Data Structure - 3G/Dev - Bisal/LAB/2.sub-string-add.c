#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];

    int i = 0, j = 0, position = 0, l = 0 ;
    int x , x1, x2,x3;

    puts("string - 1");
    gets(a);
    puts("string - 2");
    gets(b);

    puts("where you want to add enter position");
    scanf("%d",&position);

    j = strlen(a);
    x2 = strlen(b);

    while( i <= j)
    {
        c[i] = a[i];
        i++;
    }
    x1 = x2 + j;
    x3 = position + x2 ;

    for(i = position ; i < x1 ; i++)
    {
        x = c[i];
        if(l < x2 )
        {
            a[i] = b[l];
            l = l + 1;
        }
        a[x3] = x ;
        x3 = x3 + 1 ;
    }

    puts(a);
    return 0;

}
