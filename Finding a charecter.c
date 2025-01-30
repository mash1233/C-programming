#include<stdio.h>
int main()
{
    char ch;
    char strings [100];
    scanf("%s",&strings);
    int length=strlen(strings);
    int count=0;
    for (int j=0;j<length;j++)
    {
        if (strings[j]=='x'||strings[j]=='X')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0 ;
}
