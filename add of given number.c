#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d",&n);
    int value= n%10;
    int _value=n/10;
    printf("Sum of the digits of the number : %d",value+_value);
    return 0;
}
