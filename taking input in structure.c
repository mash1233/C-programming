#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1,person2;
    printf("Enter Age : ");
    scanf("%d",&person1.age);
    printf("Enter salary : ");
    scanf("\n %f",&person1.salary);
    printf("\n%d",person1.age);
    printf("\n %.2f",person1.salary);
}
