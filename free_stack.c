#include "monty.h"
/**
 * free_stack - frees a doubly linked list (stack)
 * @stack: pointer to the head of the stack
 */
void free_stack(stack_t *stack)
{
	stack_t *current_node;

	current_node = stack;
	while (stack != NULL)
	{
		current_node = stack->next;
		free(stack);
		stack = current_node;
	}
}
