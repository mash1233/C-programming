#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=10,b=90;
    int *p,*q;
    p=&a;
    q=&b;
    int sum=*p+*q;
    printf("%d",sum);

}
