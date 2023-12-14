#include "monty.h"

int main(void)
{
    stack_t *stack = NULL;
    unsigned int line_number = 1;

    /* Test push with valid integer */
    push(&stack, 10, line_number);
    pall(&stack, line_number);

    /* Test pint on non-empty stack */
    pint(&stack, line_number);

    /* Test pop on non-empty stack */
    pop(&stack, line_number);
    pall(&stack, line_number);

    /* Test pop on empty stack */
    pop(&stack, line_number);

    /* Test push with invalid input */
    push(&stack, 20, line_number);
    pall(&stack, line_number);

    /* Test pall with non-empty stack */
    pall(&stack, line_number);

    /* Clean up the stack (free memory) */
    while (stack != NULL)
    {
        stack_t *temp = stack->next;
        free(stack);
        stack = temp;
    }

    return 0;
}
