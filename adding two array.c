#include <stdio.h>
#include <stdlib.h>

void print(int arr[], int a) {
    for (int i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void input(int arr[], int a) {
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
}

int main() {
    int a, b;

    printf("Enter the size of the array[1]: ");
    scanf("%d", &a);
    int arr1[a];
    printf("Enter the elements of the array[1]: ");
    input(arr1, a);

    printf("Enter the size of the array[2]: ");
    scanf("%d", &b);
    int arr2[b];
    printf("Enter the elements of the array[2]: ");
    input(arr2, b);

    printf("Array 1: ");
    print(arr1, a);

    printf("Array 2: ");
    print(arr2, b);

    int min_size = a < b ? a : b;
    int arr3[min_size];
    printf("Sum of the arrays: ");
    for (int k = 0; k < min_size; k++) {
        arr3[k] = arr1[k] + arr2[k];
        printf("%d ", arr3[k]);
    }
    printf("\n");

    return 0;
}
