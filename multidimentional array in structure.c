#include <stdio.h>

struct student {
    char name[20];
    int roll;
    int id;
};

int main() {
    struct student s1[2] = {{"amit", 34, 12421}, {"kobir", 43, 12345}};
    struct student *ptr;  // Use a pointer of type struct student

    for (int i = 0; i < 2; i++) {
        ptr = &s1[i];
        printf("%s\t%d\t%d\t\n", ptr->name, ptr->roll, ptr->id);
    }

    return 0;
}
