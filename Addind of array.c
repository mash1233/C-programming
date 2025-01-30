#include<stdio.h>
void print(int array[],int a)
{
    for(int i=0;i<a;i++)
    {
        printf("%d",array[i]);
    }
}
int main()
{
    int a,i,j;
    printf("Enter the size : ");
    scanf("%d",&a);
    int array[a];
    printf("Enter the elements : ");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&array[i]);
    }
    print(array,a);
    int sum=0;
    int m=sizeof(array)/sizeof(array[0]);
    for(int j=0;j<m;j++)
    {
        sum=sum+array[j];
    }
    printf("\n%d",sum);
    return 0 ;
}
