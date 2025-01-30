#include<stdio.h>
void bubble_sort(int array[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1-i;j++)
        {
            if(array[j]>array[j+1]){
            int temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            }
        }
    }
}
void printing(int array[],int size)
{
    for (int i=0;i<size;i++)
    {
        printf("%d",array[i]);
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Unsorted array : ");
    printing (arr,a);
    bubble_sort(arr,a);
    printf("\n sorted array : ");
    printing(arr,a);
}
