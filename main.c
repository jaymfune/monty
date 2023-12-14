#include "monty.h"

int main(void)
{
    stack_t *stack = NULL;
    unsigned int line_number = 1;

    /* Test push with valid integer */
    instruction.opcode = "push";
    push(&stack, 10, line_number);
    pall(&stack, line_number);

    /* Test push with invalid input */
    instruction.opcode = "push";
    push(&stack, 20, line_number);
    pall(&stack, line_number);

    /* Test pall with non-empty stack */
    instruction.opcode = "pall";
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
