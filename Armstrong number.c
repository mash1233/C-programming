#include <stdio.h>

int main() {
    int number, original, remainder, result = 0;

    printf("Please enter your number: ");
    scanf("%d", &number);
    original = number;

    while (number != 0) {
        remainder = number % 10;
        result += remainder * remainder * remainder;
        number /= 10;
    }
    if (result == original) {
        printf("%d is an Armstrong Number.\n", original);
    } else {
        printf("%d is not an Armstrong Number.\n", original);
    }

    return 0;
}
