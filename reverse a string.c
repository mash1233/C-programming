#include<stdio.h>
int main()
{
    char s[]="MY Name is kodu.";
    char s2[200];
    strrev(s);
    strcpy(s2,s);
    printf("%s\n",s);
    printf("%s",s2);
}
