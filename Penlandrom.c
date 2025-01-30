#include <stdio.h>

int main() {
    int number, original, result = 0, remainder;

    printf("Enter your number: ");
    scanf("%d", &number);
    original = number;
    while (number != 0)
    {
        remainder = number % 10;
        result = result * 10 + remainder;
        number=number/10;
    }
    if (result == original) {
        printf("%d is a Palindrome...", original);
    } else {
        printf("%d is not a Palindrome...", original);
    }

    return 0;
}
