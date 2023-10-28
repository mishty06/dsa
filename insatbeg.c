// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
int insertAtBeg(struct node** first, int x){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=x;
    new_node->link= (*first);
    (*first )=new_node;
    
}
void display(struct node* node){
    while(node!=NULL){
         printf("%d -> ", node->data);
        node = node->link;
    }
    printf("NULL\n");
    }

int main() {
    // Write C code here
 struct Node* first = NULL;

    // Insert some nodes at the beginning
    insertAtBeg(&first, 6);
    insertAtBeg(&first, 4);
    //insertAtBeg(&first, 2);

    // Print the linked list
    printf("Linked list: ");
    display(first);
    return 0;
}