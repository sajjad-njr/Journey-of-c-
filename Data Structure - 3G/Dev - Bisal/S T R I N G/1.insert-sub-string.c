#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100],c[100];
    int i = 0 , j = 0 , pos , l ;
    int x , x1,x2,x3;

    puts("enter main string ");
    gets(a);
    puts("enter sub string ");
    gets(b);

     puts("enter  position  ");
     scanf("%d",&pos);

     j = strlen(a);
     x2 = strlen(b);

    while(i <= j)
    {
        c[i] = a[i];
        i++;
    }
     puts(c);

    x1 = j + x2 ;
    x3 = x2 + pos ;

    for(i = pos ; i < x1 ; i++)
    {
        x = c[i];

        if(l < x2)
        {
            a[i] = b[l];
            l += 1;
        }
    }


    return 0;
}
