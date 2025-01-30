#include <stdio.h>
#include <string.h>

struct Hotel {
    char name[30];
    char address[30];
    int star;
    int price;
};

int main() {
    int n;
    printf("Enter the number of hotels: \n");
    scanf("%d", &n);
    struct Hotel s[n];
    struct Hotel *ptr = s;
    while (getchar() != '\n');

    for (int i = 0; i < n; i++) {
        ptr = &s[i];
        printf("Please enter the information of hotel %d:\n", i + 1);
        printf("Enter name: \n");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
        printf("Enter address: \n");
        fgets(s[i].address, sizeof(s[i].address), stdin);
        s[i].address[strcspn(s[i].address, "\n")] = '\0';
        printf("Enter star: \n");
        scanf("%d", &s[i].star);
        printf("Enter price: \n");
        scanf("%d", &s[i].price);
        while (getchar() != '\n');
    }

    for (int i = 0; i < n; i++) {
        ptr = &s[i];
        printf("Information of hotel %d:\n", i + 1);
        printf("Name: %s\n", ptr->name);
        printf("Address: %s\n", ptr->address);
        printf("Star: %d\n", ptr->star);
        printf("Price: %d\n", ptr->price);
    }

    return 0;
}
