#include<stdio.h>
#include<string.h>
struct date
{
    int day;
    int month;
    int year;
};
struct student
{
    char name[200];
    int id;
    struct date d1;
};
int main()
{
    struct student s1;
    printf("Enter name :");
    gets(s1.name);
    printf("\nID ");
    scanf("%d",&s1.id);
    printf("\nDate : ");
    scanf("%d %d %d",&s1.d1.day,&s1.d1.month,&s1.d1.year);
    printf("Name : %s",s1.name);
    printf("ID : %d",s1.id);
    printf("Date : %d-%d-%d",s1.d1.day,s1.d1.month,s1.d1.year);
}
