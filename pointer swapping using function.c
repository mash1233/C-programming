
#include <stdio.h>
void swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
int main ()
{
    int a=10,b=20;
    printf("Before : a=%d b=%d ",a,b);
    int *p,*q;
    swap(&a,&b);
    printf("\nAfter: a=%d b=%d ",a,b);
}
