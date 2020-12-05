#include<stdio.h>
#include<string.h>

int main()
{
    int i = 0 , j = 0 , k = 0 , n = 0;
    int flag = 0 ;

    char str[100], word[100],newStr[100];

    printf("\nEnter a string : ");
    gets(str);
    //scanf("%s",&str);

    printf("\nEnter a word that remove from main string : ");
   gets(word);
    //scanf("%s",&word);

    for(i = 0 ; str[i] != '\0' ; i++)
    {
        k = i;
        while(str[i] == word[j])
        {
            i++,j++;
            if (j == strlen(word))
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
        newStr[n++] = str[i];
    }
    newStr[n] = '\0';
   printf("\n\n\tnew string : %s",newStr);

   return 0;
}
