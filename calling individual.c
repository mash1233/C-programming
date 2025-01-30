#include <stdio.h>
#include <string.h>

typedef struct student {
    char name[20];
    int age;
    int account;
} s;

void account1(char *name) {
    strcpy(name, "mashqurul");
}

int main() {
    s s1 = {"amit", 23, 3201};
    printf("%s\n", s1.name);
    printf("%d\n", s1.age);
    printf("%d\n", s1.account);

    account1(s1.name);  // Modify the name using the function
    printf("%s\n", s1.name);
    printf("%d\n", s1.age);
    printf("%d\n", s1.account);

    return 0;
}
