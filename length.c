#include<stdio.h>
int main()
{
    char s[]="Hi I am Mash.";
    int len= strlen(s);
    int i=0,count=0;
    printf("%d",len);
    while(s[i]!='\0')
    {
        count++;
        i++;
    }
    printf("\n count %d",count);
}
