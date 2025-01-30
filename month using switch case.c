#include<stdio.h>
int main()
{
    int month;
    printf("Please enter your month's number : ");
    scanf ("%d",&month );
    switch(month)
    {
    case 1:
    case 2:
    case 3:
    case 4:{
        printf("30 days !");
        break;
        }
    case 5:
    case 6:
    case 7:{
        printf("31 days");
        break ;
        }
        default:
        {
            printf("Not in list");
        }
    }
}
