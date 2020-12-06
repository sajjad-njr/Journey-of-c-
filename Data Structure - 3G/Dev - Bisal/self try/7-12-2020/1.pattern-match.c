#include<stdio.h>
#include<string.h>

int main()
{
    int i = 0 , k = 0, s , r ,  max , l = 0 ;
    char t[100],p[100];

    gets(t);
    gets(p);

    s = strlen(t);
    r = strlen(p);
    max = s - r + 1 ;

    while(k <= max)
    {
        for(i = 0 ; i < r ; i++)
        {
            if(p[i] != t[k+i-1])
            {
                k++;
                break;
            }
        }
        if(i == r)
        {
            printf("\n\tpattern is found at position : %d",k);
             break;
        }

    }
    if(i != r)
        printf("\n\tpattern is not found");

    return 0;
}
