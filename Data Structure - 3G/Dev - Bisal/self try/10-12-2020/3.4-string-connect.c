#include<stdio.h>

int main()
{
    char A[20], B[20];
    int lenA = 0,i = 0 ,j = 0;

    printf("\n\tEnter 1st string : ");
    gets(A);
    printf("\n\tEnter  2nd string : ");
    gets(B);

    for(i = 0 ; A[i] != '\0' ; i++)
    {
        lenA++;
    }

    for(i = lenA , j ; B[j] != '\0' ; i++, j++)    {
         A[i] = B[j];
    }
    A[i] = '\0';


    printf("\n\tafter connect two string = %s",A);
    return 0;

}
