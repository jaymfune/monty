#include "monty.h"
#include <stdio.h>

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
