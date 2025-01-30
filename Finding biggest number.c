#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int max_value = array[0];
    for (int i=1;i<n;i++)
    {
       if (array[i] > max_value)
        { max_value = array[i] ;
        }
    }
    printf("%d",max_value);
    return 0;
}
