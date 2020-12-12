#include<stdio.h>
#include<string.h>

struct person
{
    char name[50];
    int age;
    float salary;
};
//call function
void display(struct person o)
{

    printf("\nName : %s",o.name);
    printf("\nAge = %d",o.age);
    printf("\nSalary = %.2f",o.salary);
    printf("\n\n");

}

int main()
{
    struct person man1,man2;

    strcpy(man1.name,"Liza");
    man1.age = 30;
    man1.salary = 40000;
    display(man1);

    strcpy(man2.name,"Wassi Sajjad");
    man2.age = 300;
    man2.salary = 4000000;
    display(man2);

    return 0;
}
