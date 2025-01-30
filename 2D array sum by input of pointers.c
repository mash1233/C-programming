#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a, *b,*c;
    a = (int*)malloc(3 * 3 * sizeof(int));
    b = (int*)malloc(3 * 3 * sizeof(int));
    c=(int *)malloc(3*3* sizeof(int));
    int matrix1[3][3], matrix2[3][3];
    int matsum[3][3];
    a = &matrix1[0][0];
    b = &matrix2[0][0];
    printf("For matrix 1");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    for(int k=0; k<3; k++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", *(a + 3*k + j));
        }
        printf("\n");
    }
    printf("For matrix2: ");
     for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(int k=0; k<3; k++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", *(b + 3*k + j));
        }
        printf("\n");
    }

    printf("martix sum\n");
    for(int i=0;i<3;i++)
    {
        for(int J=0;J<3;J++)
        {
            *(c+3*i+J)= *(a+3*i+J) +*(b+3*i+J);
        }
    }
     for(int k=0; k<3; k++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", *(c + 3*k + j));
        }
        printf("\n");
    }

    return 0;
}
