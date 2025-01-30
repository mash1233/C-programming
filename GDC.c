#include<stdio.h>
int main ()
{
    int a,b,x,gdc;
    printf("Enter 2 numbers : ");
    scanf ("%d %d ",&a,&b);
    if (a<b){
        x=a;
    }else{
        x=b;
    }
    for(x=x;x>=1;x--){
        if(a%x==0 && b%x==0){
          gdc=x;
            break;
        }else {
            gdc=1;

        }
    }
    printf("GDC=%d",gdc);
    return 0 ;
}
