#include<stdio.h>
int main()
{
    char ch[100];
    int i;
    scanf("%s",&ch);
    int length=strlen(ch);
    int count=0;
    for(i =0;i<length;i++)
    {
        if(ch[i]=='W'||ch[i]=='W'||ch[i]=='D'||ch[i]=='d'||ch[i]=='N')
        {
            continue;
        }
        else{
            count++;
        }
    }
    int over=count/6;
    int rem=count%6;
    printf("%d OVER",over);
    printf(" %d BALL",rem);
    return 0 ;
}
