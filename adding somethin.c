#include<stdio.h>
int main()
{
    FILE *file;
    char name[200]=" How are you ?";
    file=fopen("2nd.txt","a");
    printf("\n");
    for(int i=0;i<199;i++)
    {
        fputc(name[i],file);
    }
}
