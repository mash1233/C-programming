#include<stdio.h>
struct person
{
    int age ;
    float salary;
};
int main()
{
    struct person person1={27,200000.00};
    struct person person2;
    person2=person1;

    printf("Person 1\n");
    printf("%d\n",person1.age);
    printf("%f\n",person1.salary);

    printf("Person 2\n");
    printf("%d\n",person2.age);
    printf("%f\n",person2.salary);

    if(person1.age==person2.age || person1.salary==person2.salary)
    {
        printf("same");
    }
}
