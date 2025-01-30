#include<stdio.h>
int main()
{
    int m,num1,num2,num3;
    scanf("%d",&m);
    scanf("%d %d %d",&num1,&num2,&num3);
    int sum=num1+num2+num3;
    int missing=m-sum;
    printf("%d",missing);
    return 0 ;
}
