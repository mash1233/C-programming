#include<stdio.h>
#include<math.h>
int main()
{
    int a ;
    printf("Enter the angle ");
    scanf("%d",&a);
    float n= sin(3.1416*a/180);
    printf("Angle = %f",n);
    return 0;
}
