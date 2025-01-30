#include<stdio.h>
int main()
{
    int array[3]={3,4,5};
    int *p;
    p= &array[0];
    for(int i=0;i<3;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}
