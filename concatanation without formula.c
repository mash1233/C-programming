#include<stdio.h>

int main()
{
    char s1[50] = "Hi mash.";  // Make sure s1 has enough space to hold the concatenated result
    char s2[] = " How are you?";  // Added a space for proper formatting
    int i = 0, count = 0, j = 0;

    // Finding the length of s1
    while (s1[i] != '\0')
    {
        count++;
        i++;
    }

    // Concatenating s2 to s1
    while (s2[j] != '\0')
    {
        s1[count + j] = s2[j];
        j++;
    }

    // Null-terminate the resulting string
    s1[count + j] = '\0';

    printf("%s\n", s1);

    return 0;
}
