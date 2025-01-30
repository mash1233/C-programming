#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    file=fopen("2nd.txt","r");
    printf("Opening File : \n");
    while (!feof(file))
    {
        ch=fgetc(file);
        printf("%c",ch);
    }
    fclose(file);
}
