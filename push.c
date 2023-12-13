#include "monty.h"
/**
 * push - pushes an element onto the stack
 * @stack: pointer to the stack
 * @value: value to be pushed
 *
 * Description: Pushes the given value onto the stack.
 * If the stack is full, prints an error message and exits with failure.
 */

void initialize(Stack *stack)
{
	stack->top = -1;
}

void push(Stack *stack, int value)
{
	if (stack->top == MAX_SIZE - 1)
	{
		printf("Stack overflow\n");
		exit(EXIT_FAILURE);
	}
	stack->items[++stack->top] = value;
}
