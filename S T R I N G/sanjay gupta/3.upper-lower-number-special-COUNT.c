#include<stdio.h>

int main()
{
    int i CountUp = CountLow = CountNum = CounSp = 0 ;
    char str[100];

    printf("\nEnter a line with mix : ");
    gets(str);

    for(i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            CountUp++;
        else
            if(str[i] >= 'a' && str[i] <= 'z')
                CountLow++;
            else

    }
}
