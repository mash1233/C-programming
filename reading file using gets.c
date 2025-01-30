#include <stdio.h>

int main()
{
    FILE *file;
    char cha[400];
    file = fopen("2nd.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    printf("File is opening: \n");
    while (fgets(cha, sizeof(cha), file) != NULL)
    {
        printf("%s", cha);
    }

    fclose(file);
    return 0;
}
