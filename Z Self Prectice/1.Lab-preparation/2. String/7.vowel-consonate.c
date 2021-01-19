//vowel and consonant

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, length = 0, vowel = 0;

    printf("\n\tEnter string = ");
    gets(str);

    for(i=0 ; str[i] != '\0' ; i++)
    {

        length++;

        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] =='O' ||  str[i] == 'U')
        {
            vowel++;
        }

        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||  str[i] == 'u')
        {
            vowel++;
        }


    }
    printf("\n\tVowel = %d",vowel);

    printf("\n\tConsonant = %d",length-vowel);


    return 0;
}

