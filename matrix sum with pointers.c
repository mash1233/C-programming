#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &r, &c);

    int *a = (int *)malloc(r * c * sizeof(int));
    int *b = (int *)malloc(r * c * sizeof(int));
    int *e = (int *)malloc(r * c * sizeof(int));

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", (a + i * c + j));
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", (b + i * c + j));
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            *(e + i * c + j) = *(a + i * c + j) + *(b + i * c + j);
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", *(e + i * c + j));
        }
        printf("\n");
    }

    free(a);
    free(b);
    free(e);

    return 0;
}
