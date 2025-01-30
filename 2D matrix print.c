#include<stdio.h>
#include<stdlib.h>
int main()
{
    int array[2][3]={{2,3,4},{3,4,5}};
    int *p;
    p=&array[0][0];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf(" %d ",*(p+i*3+j));
        }
        printf("\n");
    }
    return 0;
}
