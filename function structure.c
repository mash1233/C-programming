#include<stdio.h>
struct person
{
    char name[50];
    int roll;
    float marks;
};
void display(struct person p)
{
    printf("Name : %s\n",p.name);
    printf("roll : %d\n",p.roll);
    printf("marks : %f",p.marks);
}
int main()
{
    struct person person1;
    strcpy(person1.name,"abul");
    person1.roll=9;
    person1.marks=90;
    display(person1);
}
