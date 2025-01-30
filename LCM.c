#include<stdio.h>
int main ()
{
    int a,b,LCM,x;
    printf("Enter number : ");
    scanf ("%d %d",&a,&b);
    x=(a>b)?a:b;
    while (1)
    {
        if (x%a==0 && x%b==0){
            LCM=x;
            break;
        }else {
            x++;
        }
    }
    printf("LCM=%d",LCM);
    return 0;
}
