#include<stdio.h>
#include<string.h>

int main()
{
    int K=0 ,Max,S,R,L;

    char T[100],P[100];

    gets(T);
    gets(P);

    S=strlen(T);
    R=strlen(P);

    Max=S-R+1;

    while(K<Max)
    {
        for(L=0; L<R; L++)
        {
            if(P[L]!=T[K+L-1])
            {
                K++;
                break;
            }
        }
        if(L==R)
        {
            printf("Pattern is found at position: %d\n",K);
            break;
        }
    }
    if(L!=R)
        printf("Pattern is not found\n");

    return 0;
}
