#include<stdio.h>
#include<string.h>

int main()
{
    char str[50] = "Hi I am Mashqurul ";
    char str2[50];
    int i = 0, count = 0, j;

    // Calculate length of str
    while (str[i] != '\0')
    {
        count++;
        i++;
    }

    // Reverse str into str2
    for (j = 0, i = count - 1; i >= 0; i--, j++)
    {
        str2[j] = str[i];
    }

    // Null-terminate the reversed string
    str2[j] = '\0';

    printf("%s\n", str2);

    int d = strcmp(str2, str);
    if (d == 0)
    {
        printf("Palindrome.\n");
    }
    else
    {
        printf("Not palindrome.\n");
    }

    return 0;
}
