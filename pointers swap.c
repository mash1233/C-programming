#include <stdio.h>
int main ()
{
    int a=10,b=20;
    int *p,*q;
    p=&a;
    q=&b;
    int temp=*p;
    *p=*q;
    *q=temp;
    printf("a=%d\n",*p);
    printf("b=%d",*q);


}
