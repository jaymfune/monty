#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: pointer to the stack
 * @counter: line number
 *
 * Description: Swaps the top two elements of the stack.
 * If the stack contains less than two elements, prints an error message
 * to stderr and exits with failure.
 */
void swap(Stack *stack, unsigned int counter)
{
	if (stack->top < 1)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", counter);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	/* Swap the top two elements */
	int temp = stack->items[stack->top];
	stack->items[stack->top] = stack->items[stack->top - 1];
	stack->items[stack->top - 1] = temp;
}
