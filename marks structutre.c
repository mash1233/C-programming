#include<stdio.h>
#include<strings.h>
struct person
{
    char name[50];
    int roll;
    float marks;

};
int main()
{
    int a;
    printf("How many students: ");
    scanf( "%d",&a);
    struct person person [a];
    for(int i=0;i<a;i++)
    {
        printf("Enter %d student's Information: ",i+1);
        printf("Name : \n");
        fflush(stdin);
        gets(person[i].name);
        printf("Roll : \n");
        scanf("%d",&person[i].roll);
        printf("Marks : \n");
        scanf("%f",&person[i].marks);
    }
    for(int i=0;i<a;i++)
    {
        printf("Information of %d\n",i+1);
        printf("Name : %s\n",person[i].name);
        printf("Roll : %d\n",person[i].roll);
        printf("marks : %.2f\n",person[i].marks);

    }
}
