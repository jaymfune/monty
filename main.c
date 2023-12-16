#include "monty.h"

int main(void)
{
	stack_t *stack = NULL;
	unsigned int line_number = 1;

	push(&stack, 10, line_number);
	push(&stack, 20, line_number);
	push(&stack, 0, line_number);

	/* Clean up the stack (free memory) */
	while (stack != NULL)
	{
		stack_t *temp = stack->next;

		free(stack);
		stack = temp;
	}
	return (0);
}
