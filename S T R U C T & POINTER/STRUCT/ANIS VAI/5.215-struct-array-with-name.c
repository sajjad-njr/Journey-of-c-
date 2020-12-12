#include<stdio.h>

struct information
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct information person[4];
    int i ;

    for(i = 0 ; i < 4 ; i++)
    {
        printf("\n\tEnter the person %d INFORMATION \n",i+1);
        printf("\n\tEnter the user name = ");
        fflush(stdin);
        gets(person[i].name);
        printf("\n\tEnter person age = ");
        scanf("%d",&person[i].age);
        printf("\n\tEnter person  salary = ");
        scanf("%d",&person[i].salary);
    }

    for(i = 0 ; i < 4 ; i++)
    {
        printf("\n\tThe person %d INFORMATION \n",i+1);
        printf("\n\tPerson name = %s ",person[i].name);
        printf("\n\tPerson age = %d ",person[i].age);
        printf("\n\tPerson  salary = %.2f",person[i].salary);
    }

    return 0;
}

