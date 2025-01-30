#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    int rem=Y%X;
    int need;
    if(rem==0){
        printf("0");
    }else{
        need=X-rem;
    }
    printf("%d",need);
    return 0 ;
}
