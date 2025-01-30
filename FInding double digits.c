#include<stdio.h>
int main()
{
    int array[10]={0},n,rem;
    printf("Enter your number : ");
    scanf("%d",&n);
    while (n>0)
    {
        rem=n%10;
        if (array[rem]==1)
        break;
        array [rem]=1;
        n=n/10;
    }
    if(n>0)
    {
        printf("Yes");
    }
    else
        {
            printf("No");
        }
    }
