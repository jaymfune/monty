#include "monty.h"

/**
 * pall - prints all values on the stack
 * @stack: pointer to the stack
 *
 * Description: Prints all values on the stack from top to bottom.
 * If the stack is empty, does nothing.
 */

void pall(const Stack *stack)
{
	int i;

	if (stack->top == -1)
	{
		/* Stack is empty, do nothing */
		return;
	}

	printf("Stack values from top to bottom: ");

	for (i = stack->top; i >= 0; --i)
	{
		printf("%d ", stack->items[i]);
	}
	printf("\n");
}
