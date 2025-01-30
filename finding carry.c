#include <stdio.h>
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int carry = 0;
    int carryExists = 0;
    int temp1 = num1, temp2 = num2;
    while (temp1 != 0 || temp2 != 0) {
        int digit1 = temp1 % 10;
        int digit2 = temp2 % 10;
        int sum = digit1 + digit2 + carry;
        if (sum >= 10) {
            carry = 1;
            carryExists = 1;
        } else {
            carry = 0;
        }
        temp1 /= 10;
        temp2 /= 10;
    }
    if (carryExists) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
