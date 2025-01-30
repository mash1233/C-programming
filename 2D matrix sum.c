#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr1[2][3]={{1,3,4},{2,4,5}};
    int arr2[2][3]={{2,3,4},{2,5,6}};
    int *p,*q;
    p=&arr1[0][0];
    q=&arr2[0][0];
    printf("Matrix 1 :\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",*(p+i*3+j));
        }
        printf("\n");
    }
    printf("Matrix 2:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",*(q+i*3+j));
        }
        printf("\n");
    }
    int *result=malloc(2*3*sizeof(int));
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            *(result+i*3+j)=*(q+i*3+j)+*(p+i*3+j);
        }
    }
     printf("Matrix reuslt:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",*(result+i*3+j));
        }
        printf("\n");
    }

}
