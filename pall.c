#include "monty.h"

/**
 * pall - prints all the values on the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number in the Monty byte code file
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void)line_number; /* Unused parameter */
	
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
