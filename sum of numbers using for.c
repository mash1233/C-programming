#include <stdio.h>
int main ()
{
    int i,n,sum;
    sum=0;
    printf("please enter your value to find out : ");
    scanf ("%d",&n);
    for (i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0 ;
}
