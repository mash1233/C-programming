#include<stdio.h>
int main()
{
    int factorial,i,n;
    factorial=1;
    printf("Please enter your number : ");
    scanf ("%d",&n);
    for (i=1;i<=n;i++){
        factorial =factorial*i;
    }
    printf("%d",factorial );
    return 0 ;
}
