#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number in the Monty byte code file
 */
void add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}

