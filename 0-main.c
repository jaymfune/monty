#include "monty.h"

int main()
{
    Stack myStack;
    initialize(&myStack);

    /* Example usage of push and pall */
    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);

    pall(&myStack);

    /* pint */
    void pint(const Stack *stack);

    return 0;
}
