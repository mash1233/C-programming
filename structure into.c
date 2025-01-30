#include<stdio.h>
struct person
{
    char name[50];
    int salary;
};
int main()
{
    struct person person1,person2;
    strcpy(person1.name,"mash");
    person1.salary=24;
    printf("%s\n",person1.name);
    printf("%d",person1.salary);
}
