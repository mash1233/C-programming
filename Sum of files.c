#include<stdio.h>
int main()
{
    FILE *file_in,*file_out;
    file_in=fopen("integer.txt","w");
    file_out=fopen("sum.txt","w");
    int a,b;

        printf("Enter your numbers : ");
        scanf("%d%d",&a,&b);
        fprintf(file_in,"%d %d",a,b);
    fprintf(file_out,"%d",a+b);

}
