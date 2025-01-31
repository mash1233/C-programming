#include<stdio.h>
int main()
{
    FILE *file;
    char name[300];
    int n,age,phone_number ;
    file=fopen("3rd.txt","a");
    if(file==NULL)
    {
        printf("Not created. ");
    }
    else
    {
        printf("Enter the number of students : ");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            printf("Enter name :");
            scanf("%s",&name);
            fprintf(file,"%s\n",name);
            printf("Enter roll : ");
            scanf("%d",&age);
            fprintf(file,"%d\n",age);
            printf("Enter phone number : ");
            scanf("%d",&phone_number);
            fprintf(file,"%d\n",phone_number);

        }
    }
}
