#include<stdio.h>
int main()
{
    int a;
    printf("Enter how much time you want to roll : ");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        printf("%d \n",1+rand()%6);
    }
    return 0;
}
