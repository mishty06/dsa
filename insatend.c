#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void InsAtEnd(struct node **first, int x) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = x;
    new_node->link = NULL;

    if (*first == NULL) {
        *first = new_node;
    } else {
        struct node *temp = *first;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = new_node;
    }
}

void display(struct node *node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->link;
    }
    printf("NULL\n");
}

int main() {
    struct node *first = NULL;

    // Insert some nodes at the end
    InsAtEnd(&first, 6);
    InsAtEnd(&first, 4);
    InsAtEnd(&first, 2);

    // Print the linked list
    printf("Linked list: ");
    display(first);
    return 0;
}
