#include <stdio.h>
int main()
{
    int a, *p;
    printf("Array size :");
    scanf("%d", &a);
    int array[a];
    p = &array[0];
    printf("Please enter elements : ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Array :");
    for (int i = 0; i < a; i++){
        printf("%d ", *p);
        p++;
    }
    //have to reset after loops
    p=&array[0];
    int sum=0;
    for(int i=0;i<a;i++)
    {
        sum=sum+*p;
        p++;
    }
    printf ("\nsum= %d",sum);
    return 0;
}
