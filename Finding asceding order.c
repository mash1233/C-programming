#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int array[num];
    for (int i = 0; i < num; i++) {
        scanf("%d", &array[i]);
    }
    int ascend = 1;
    for (int j = 0; j < num - 1; j++) {
        if (array[j] > array[j + 1]) {
            ascend = 0;
            break;
        }
    }
    if (ascend) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
