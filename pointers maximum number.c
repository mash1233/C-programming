#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a,*b,*max;
    a=(int*)malloc(sizeof(int));
    b=(int*)malloc(sizeof(int));
    max=(int*)malloc(sizeof(int));
    scanf("%d %d",a,b);
    if(*a>*b)
    {
        *max=*a;
        printf("maxima : %d",*max);
    }
    else
    {
                *max=*b;
        printf("maxima : %d",*max);
    }
    return 0;
}
