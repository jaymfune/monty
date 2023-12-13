#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

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
