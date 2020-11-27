#include<stdio.h>

void main()
{
    int i, CountUp = 0, CountLow = 0, CountNum = 0, CountSp = 0 ;
    char str[100];

    printf("\nEnter a line with mix : ");
    gets(str);

    for(i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            CountUp++;
        else if(str[i] >= 'a' && str[i] <= 'z')
            CountLow++;
        else if(str[i] >= '0' && str[i] <= '9')
            CountNum++;
        else
            CountSp++;
    }

    printf("\nUpper Latter = %d",CountUp);

    printf("\nLower Latter = %d",CountLow);

    printf("\nNumber   = %d",CountNum);

    printf("\n Special Character  = %d",CountSp);

}
