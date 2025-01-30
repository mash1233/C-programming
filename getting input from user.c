#include<stdio.h>
int main()
{
    FILE *file;
    char name[200];
    int mobile[11];
    char group[10];
    file=fopen("2nd.txt","w");

    printf("Enter your name: ");
    gets(name);
    printf("\n");
    fputs(name,file);
    printf("\n");
    printf("Enter your mobile: ");
    gets(mobile);
    fputs(mobile,file);
    printf("\n");
    printf("Enter your blood group: ");
    gets(group);
    fputs(group,file);
    printf("Written successfully. ");

}
