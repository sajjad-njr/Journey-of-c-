#include<stdio.h>
#include<string.h>

int main()
{
    char t[100],p[100];
    int k=0, max, r, s,l, cnt, loc;

    gets(t);
    gets(p);

    r = strlen(p);
    s = strlen(t);
    max = s - r + 1 ;

    while(k <= max)
    {
        for(l = 0 ; l < r ; l++)
        {
            if(p[l] != t[k+l-1])
            {
                k++;
                break;
            }
        }
        if(l==r)
            printf("\n\tPattern is found at pos = %d\n",k);
        break;
    }
    if(l != r)
       printf("\n\tPattern is not found ");

    return 0;
}
