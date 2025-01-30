#include<stdio.h>
int main()
{
    char str1[50]="I am mash";
    char str2[50]="Hey ";
    char temp[50];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("%s",str1);
    printf("%s",str2);

}
