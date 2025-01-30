#include<stdio.h>
int mean (int array [],int n)
{
    float sum=0;
    for (int i =0;i<=n+1;i++){
        scanf("%d",&array[i]);
        sum=sum+i;
    }
    return sum/n ;
}
int main ()
{
    int m , arry[m];
    printf("please Enter array size : ");
    scanf ("%d",&m);
    for (int i =0;i<=m;m++){
        scanf("%d",&arry[i]);
    }
    printf("Mean : %d",mean(arry,m));
}
