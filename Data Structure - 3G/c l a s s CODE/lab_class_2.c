#include<stdio.h>
#include<string.h>

int main()
{

    char str1[100],str2[100];
    char strconcate[200];

    gets(str1);
    gets(str2);

   int len1= strlen(str1);
   int len2= strlen(str2);
    int i,cnt=0;
    for(i=0;i<len1;i++)
    {
        strconcate[cnt++]=str1[i];
    }
    for(i=0;i<len2;i++)
    {
        strconcate[cnt++]=str2[i];
    }
    strconcate[cnt++] = '\0';
   printf("Final String is: %s\n",strconcate);

    return 0;
}
