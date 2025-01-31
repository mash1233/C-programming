#include<stdio.h>
int main()
{
    FILE *file;
    int n;
    file=fopen("search.txt","w");
    int array[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&n);
        fprintf(file,"%d",n);
        array[i]=n;
    }
    fclose(file);
    int count =0;
    for (int i=0;i<3;i++)
    {
        if(array[i]==2)
        count++;

    }
    printf("count: %d",count);
}
