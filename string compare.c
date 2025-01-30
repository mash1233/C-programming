#include<stdio.h>
#include<string.h>

int main()
{
    char s1[] = "mash";
    char s2[] = "jerin";
    int d = strcmp(s1, s2);
    printf("%d\n", d);
    if(d==1)
    {
        printf("Not equal");
    }
    else("equal");
    return 0;
}
