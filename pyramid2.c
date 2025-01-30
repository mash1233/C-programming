#include<stdio.h>
int main()
{
    int row;
    scanf("%d",&row);
    int k=row;
    for(int i=1;i<=row;i++){
        for(int l=k-1;l>0;l--){
            printf(" ");
        }k--;
        for(int j=1;j<=i;j++){
            printf("* ");
        }
         printf("\n\n");
    }
}

