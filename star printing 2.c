#include<stdio.h>
int main()
{
    int i,j,a;
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        for (j=1;j<=a;j++)
        {
            if((i+j)<=a)
            {
                printf(" ");
            }else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}

