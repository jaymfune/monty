#include "monty.h"

int main() {
    Stack myStack;
    initialize(&myStack);

    // Example usage of push, pop, and swap
    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    pop(&myStack, 1);
    swap(&myStack, 2);

    pall(&myStack);

    return 0;
}

