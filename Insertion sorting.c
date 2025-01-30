#include<stdio.h>

void input(int a, int b, int mat[a][b]) {
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    printf("Enter the number of columns: ");
    scanf("%d", &b);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("Enter the (%d, %d) element: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void print(int a, int b, int mat[a][b]) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int x, y;
    printf("Matrix 1:\n");
    int mat1[10][10];
    input(x, y, mat1);
    print(x, y, mat1);

    int a, b;
    printf("Matrix 2:\n");
    int mat2[10][10];
    input(a, b, mat2);
    print(a, b, mat2);

    int matsum[10][10];
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            matsum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Sum:\n");
    print(x, y, matsum);

    return 0;
}
