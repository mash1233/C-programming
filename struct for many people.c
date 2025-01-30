#include<stdio.h>
struct person
{
    char name[50];
    int age ;
    float salary;
};
int main()
{
    struct person person[2];
    for(int i=0;i<2;i++)
    {
        printf("Person %d.",i+1);
        printf("Enter name : ");
        scanf("%s",&person[i].name);
         printf("Enter age : ");
        scanf("%d",&person[i].age);
         printf("Enter salary : ");
        scanf("%f",&person[i].salary);
    }
    for(int i=0;i<2
    ;i++)
    {
        printf("Person %d.",i+1);
        printf("Name : %s\n",person[i].name);
         printf("Age : ",person[i].age);
         printf("Salary : ",person[i].salary);
    }
    return 0;
}
