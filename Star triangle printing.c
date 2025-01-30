#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number to print : ");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++){
            printf("*");
        }
        printf("\t \n");
    }
    return 0 ;
}
