#include<stdio.h>
int main()
{
    int arry[]={1,2,3,4,5,6,6,8,9,9,0,0,112,2,2,2,3,4,4,4,5,5,5};
    printf("%d",sizeof(arry)/sizeof(arry[0]));
}
