#include<stdio.h>
#include<stdlib.h>

int main() {
    int a, b;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    printf("Enter the number of columns: ");
    scanf("%d", &b);

    int mat1[a][b], mat2[a][b], sum[a][b];

    // Input for matrix 1
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("Enter the (%d, %d) element for matrix 1: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Print matrix 1
    printf("Matrix 1:\n");
    for (int i = 0; i < a; i++) {
        printf("|");
        for (int j = 0; j < b; j++) {
            printf(" %d ", mat1[i][j]);
        }
        printf("|\n");
    }

    // Input for matrix 2
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("Enter the (%d, %d) element for matrix 2: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Print matrix 2
    printf("Matrix 2:\n");
    for (int i = 0; i < a; i++) {
        printf("|");
        for (int j = 0; j < b; j++) {
            printf(" %d ", mat2[i][j]);
        }
        printf("|\n");
    }

    // Calculate the sum of matrices
    printf("Sum:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Print the sum matrix
    for (int i = 0; i < a; i++) {
        printf("|");
        for (int j = 0; j < b; j++) {
            printf(" %d ", sum[i][j]);
        }
        printf("|\n");
    }

    return 0;
}
