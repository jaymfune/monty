#include "monty.h"
/**
 * pop - removes the top element of the stack
 * @stack: pointer to the stack
 * @counter: line number
 *
 * Description: Removes the top element of the stack.
 * If the stack is empty, prints an error message
 * to stderr and exits with failure.
 */
void pop(Stack *stack, unsigned int counter)
{
	if (stack->top == -1)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", counter);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	/* decrement the top to remove the top element */
	stack->top--;
}
