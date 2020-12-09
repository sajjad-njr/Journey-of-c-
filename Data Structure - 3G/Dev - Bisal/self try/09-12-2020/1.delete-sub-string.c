#include<stdio.h>
#include<string.h>

int main()
{
    int i = 0, j = 0, k = 0, n = 0;
    int flag = 0 ;
    char str1[100],str2[100],newl[100];


    printf("\n\tEnter any to sort : ");
    gets(str1);

    printf("\n\tEnter any to sort : ");
    gets(str2);

    for(i=0;str1[i]='\0';i++)
    {
        k = i;

        while(str[i] == word[i])
        {
            i++,j++;
            if(j==strlen(str2))
            {
                flag  = 0 ;
                break;
            }
        }
        j = 0;
        if(flag == 0)
            i = k;
        else
            flag = 0;
        newl[n++] = str1[i];
    }
    newl[n] = '\0';

    printf()
    return 0;
}
