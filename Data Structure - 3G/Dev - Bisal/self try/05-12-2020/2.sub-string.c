#include<stdio.h>
#include<string.h>

int main()
{
    int i = 0 , j = 0 , k = 0 , n = 0;
    int flag = 0 ;
    char str[100],newl[100],word[100];

    printf("\nEnter a string : ");
    gets(str);

    printf("\nEnter a  word that you want to remove : ");
    gets(word);

    for(; str[i] != '\0'; i++)
    {
        k = i ;
        while(str[i] == word[j])
        {
            i++,j++;
            if(j == strlen(word))
            {
                flag = 1 ;
                break;
            }
        }
        j = 0 ;
         if(flag == 0)
            i = k;
         else
            flag = 0;
         newl[n++] = str[i];

    }
    newl[n] = '\0';

    printf("\n\t\tnew string is :%s ",newl);
    return 0;
}
