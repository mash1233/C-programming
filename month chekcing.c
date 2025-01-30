#include<stdio.h>
#include<string.h>
int main ()
{
   int month;
    printf("Please enter your month to check : ");
    scanf("%d",&month);
    if (month ==9 || month ==3|| month==4|| month==2|| month == 1)
    {
        printf("30 days ");
    }
    else if(month==2|| month== 3|| month == 8|| month==7)
    {
        printf("31 days");
    }
    else if (month==10){
        printf("29 days ");
    }
    else
        printf("Not in list");
    return 0 ;
}
