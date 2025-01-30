#include<stdio.h>
int main()
{
    int first,i,second,next,n;
    first=0;
    second=1;
    printf("How much series you want to find out : ");
    scanf ("%d",&n);
    printf("series");
    for (i=0;n>i;i++){
        if (i<=1){
            next=i;
        }else
        {
            next=first+second;
            first=second;
            second=next;
        }
        printf("\n %d",next);
    }
    return 0;
}
