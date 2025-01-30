#include<stdio.h>
struct person
{
    char name[300];
    char address[300];
    int age;
    int date;
};
struct person s1;
int main()
{
    struct person *ptr=&s1;
    gets((*ptr).name);
    scanf("%d",&(*ptr).age);
    scanf("%d",&(*ptr).date);
    printf("\n%s",(*ptr).name);
    printf("\n%d",(*ptr).age);
    printf("\n%d",(*ptr).date);
    return 0;
}
