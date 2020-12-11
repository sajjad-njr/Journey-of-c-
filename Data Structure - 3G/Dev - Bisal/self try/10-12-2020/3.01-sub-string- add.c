#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100],c[100];
    int i = 0, j = 0, pos = 0, l = 0 ;
    int x, x1,x2,x3;

    puts("enter your  main string ");
    gets(a);
    puts("enter sub string that you want to add :  ");
    gets(b);

    puts("enter the  position  where you add = ");
    scanf("%d",&pos);

    j = strlen(a);
    x2 = strlen(b);

    //string 3 [c] that store item from a[] // a coping to c
    while(i <= j)
    {
        c[i] = a[i];
        i++;
    }

    x1 = j + x2 ;
    x3 = x2 + pos ;

    for(i = pos ; i < x1 ; i++)
    {
        x = c[i];

        if(l < x2)
        {
            a[i] = b[l];
            l = l + 1;
        }
        a[x3] = x;
        x3 = x3 +  1 ;
    }

    //puts(a); // use puts is not work i do not know

    printf("\n\tconect string  : %s",a);

    return 0;
}
