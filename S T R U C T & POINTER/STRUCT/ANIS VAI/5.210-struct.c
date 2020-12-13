#include<stdio.h>

struct wassi
{
    int age ;
    float salary;
};



int main()
{
    struct wassi f;

    f.age = 19;
    f.salary = 4567.76;

    printf("preson age = %d and salary = %.2f",f.age,f.salary);



    return 0;
}
