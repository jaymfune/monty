#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @stack: pointer to the stack
 *
 * Description: Prints the value at the top of the stack, followed by a new line.
 * If the stack is empty, prints an error message and exits with failure.
 */
void pint(const Stack *stack)
{
	if (stack->top == -1)
	{
		/* Stack is empty, print error message and exit */
		fprintf(stderr, "L<line_number>: can't pint, stack empty\n");
		exit(EXIT_FAILURE);
	}
	printf("%d\n", stack->items[stack->top]);
}