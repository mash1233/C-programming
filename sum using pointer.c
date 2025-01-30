#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x=10;
    int *ptr;
    ptr=&x;
    *ptr=*ptr+1;
    printf("%d",*ptr);
    return 0;
}
