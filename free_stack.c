#include "monty.h"

/* Function to free dynamically allocated memory in the stack */
void free_stack(Stack *stack)
{
    stack->top = -1;
}

