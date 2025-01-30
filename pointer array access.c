#include<stdio.h>
int main ()
{
    int a[] = {2, 3, 4, 5, 6, 0};
    int *p;
    p = &a[0];
    for (int i = 0; i <= 5; i++)
    {
        printf("%d\n", *p);
        p++;
    }
    return 0;
}
