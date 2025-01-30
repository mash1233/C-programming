#include<stdio.h>
void print(int array[],int a )
{
    for (int i=0;i<a;i++)
    {
        printf("%d",array[i]);
    }
    printf("\n");
}
int main()
{
    int m,a;
    printf("Size of the array : ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the elements : ");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    print(arr,a);
    printf("Enter the position to be deleted : ");
    scanf("%d",&m);
    if(m>a ||m<1)
    {
        printf("Invalid");
    }
    else
    {
        for(int i=m-1;i<a-1;i++)
        {
            arr[i]=arr[i+1];
        }
    }
    a--;
    print(arr,a);
    return 0;
}


