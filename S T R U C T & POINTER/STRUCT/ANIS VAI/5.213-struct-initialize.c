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

    struct wassi person2,person3;
    person2.age = 50;
    person2.salary = 9090.90;


    person3 = person2;

    printf("\n\npreson 2  age = %d and salary = %.2f",person2.age,person2.salary);
    printf("\n\npreson 3  age = %d and salary = %.2f",person3.age,person3.salary);
    return 0;
}
