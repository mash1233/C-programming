#include<stdio.h>
int main()
{
    int a,i;
    printf ("Enter your number ");
    scanf ("%d",&a);
    for (i=0;i<a;i++)
        printf("%d \n",1+rand()%10);
    return 0;
}
