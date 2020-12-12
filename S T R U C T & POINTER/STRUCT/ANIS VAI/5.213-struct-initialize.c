#include<stdio.h>

struct  wassi
{
    int age ;
    float salary ;
};

int main()
{
    struct  wassi person1 = {29,780.98};

    printf("preson age = %d and salary = %.2f",person1.age,person1.salary);
    // struct person person2 , person3;

    return 0;
}
