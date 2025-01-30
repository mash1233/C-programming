#include<stdio.h>
int main()
{
    FILE *file;
    char name[200]="MD : Mashqurul Alam ";
    file=fopen("1st.txt","w");
    if(file==NULL)
    {
        printf("File was not created. ");
    }
    if(file!=NULL)
    {
        printf("The file is being created. ");
        for(int i=0;i<199;i++)
        {
            fputc(name[i],file);
        }
        printf("\n");
        printf("Written down.");
        fclose(file);
    }
}
