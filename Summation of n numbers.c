#include<stdio.h>
int main()
{
    int n,i,sum;
    sum=0;
    printf("Please enter your number : ");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum is = %d ",sum);
    return 0;
}
