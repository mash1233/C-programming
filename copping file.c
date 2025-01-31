#include <stdio.h>

int main()
{
    FILE *source, *output;
    char name[200];
    int roll;

    // Open Source.txt in write mode
    source = fopen("Source.txt", "w");
    if (source == NULL)
    {
        printf("Error opening Source.txt for writing!\n");
        return 1;
    }

    // Open Output.txt in write mode
    output = fopen("Output.txt", "w");
    if (output == NULL)
    {
        printf("Error opening Output.txt for writing!\n");
        fclose(source); // Close the source file if opening the output file fails
        return 1;
    }

    // Write name and roll number to Source.txt
    for (int i = 0; i < 2; i++)
    {
        printf("Enter your name: \n");
        scanf("%s", name);
        fprintf(source, "%s\n", name);
        printf("Roll: \n");
        scanf("%d", &roll);
        fprintf(source, "%d\n", roll);
    }

    // Close the source file
    fclose(source);

    // Reopen Source.txt in read mode
    source = fopen("Source.txt", "r");
    if (source == NULL)
    {
        printf("Error reopening Source.txt for reading!\n");
        fclose(output);
        return 1;
    }

    // Copy content from Source.txt to Output.txt
    char buffer[300];
    while (fgets(buffer, sizeof(buffer), source) != NULL)
    {
        fputs(buffer, output);
    }

    // Close both files
    fclose(source);
    fclose(output);

    return 0;
}
