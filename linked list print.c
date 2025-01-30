#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void print(struct node* ptr) {
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main() {
    struct node* head;
    struct node* second;
    struct node* third;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 9;
    second->next = third;  //alada alada duiti parameter declear korte hobe

    third->data = 10;
    third->next = NULL;

    print(head);

    return 0;
}
