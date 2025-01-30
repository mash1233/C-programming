#include<stdio.h>

int main()
{
    char s1[50] = "Mashqurul";
    char s2[50];
    int i = 0, len = 0;

    // Calculate length of s1
    while (s1[i] != '\0')
    {
        len++;
        i++;
    }

    // Reverse s1 into s2
    for (int j = 0; j < len; j++)
    {
        s2[j] = s1[len - j - 1];
    }

    // Null-terminate the reversed string
    s2[len] = '\0';

    printf("%s\n", s2);

    return 0;
}
