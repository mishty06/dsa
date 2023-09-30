#include <stdio.h>

#define MAX_SIZE 100

struct Stack {
    int data[MAX_SIZE];
    int top;
};

int main() {
    struct Stack stack;
    stack.top = -1;

    // Push elements onto the stack
    stack.data[++stack.top] = 10;
    stack.data[++stack.top] = 20;
    stack.data[++stack.top] = 30;

    // Pop elements from the stack
    if (stack.top >= 0) {
        printf("Popped element: %d\n", stack.data[stack.top--]);
    } else {
        printf("Stack underflow! Cannot pop from an empty stack\n");
    }

    if (stack.top >= 0) {
        printf("Popped element: %d\n", stack.data[stack.top--]);
    } else {
        printf("Stack underflow! Cannot pop from an empty stack\n");
    }

    if (stack.top >= 0) {
        printf("Popped element: %d\n", stack.data[stack.top--]);
    } else {
        printf("Stack underflow! Cannot pop from an empty stack\n");
    }

    if (stack.top >= 0) {
        printf("Popped element: %d\n", stack.data[stack.top--]);
    } else {
        printf("Stack underflow! Cannot pop from an empty stack\n");
    }

    return 0;
}
