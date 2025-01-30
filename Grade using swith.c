#include <stdio.h>
int main()
{
    int number;
    printf("Enter your marks :");
    scanf("%d",&number);
    switch(number/10)
    {
    case 10:
        printf("A+");
        break ;
    case 9:
        printf("A+");
        break ;
    case 8:
        printf("A");
        break ;
    case 7:
        printf("A-");
        break ;
    case 6:
        printf("B+");
        break ;
    case 05:
        printf("C");
        break ;
    case 4:
        printf("D");
        break ;
    default :
        printf("Fail");
    }
}
