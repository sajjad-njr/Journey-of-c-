#include<stdio.h>

int main()
{
    int n = 10 ,a[10] = {45,56,7,78,9,87,54,32,29,987};
    int i , j,pos,element ;

    int wassi = 2 ;

    for(i = 0 ; i <n ; i++)
    {
        printf(" %d ",a[i]);

        printf(" %d ",a[i]*wassi);
    }

    return 0;
}
