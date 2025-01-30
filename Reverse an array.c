#include<stdio.h>
int main()
{
    int arry [9]={1,3,5,6,7,8,9,0};
    for (int i=0;i<9;i++)
    {
        printf("%d \t",arry[i]);
    }
    printf("\n ");
    for (int i=8;i>=0;i--)
    {
        printf("%d\t",arry[i]);
    }
    return 0 ;
}
