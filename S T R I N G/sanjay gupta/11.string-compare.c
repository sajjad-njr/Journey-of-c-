#include<stdio.h>

void main()
{
     char s1[20],s2[20];

     int i ,j = 0;

     gets(s1);
     gets(s2);

     for(i = 0 ; s1[i] != '\0' || s2[i] != '\0' ; i++)
     {
         if(s1[i] != s2[i])
         {
             j = 1;
             break;
         }

     }
     if(j == 0)
        printf("\nMatch");
     else
        printf("\nNo");

}
