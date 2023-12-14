#include "monty.h"
/**
 * sub - subtracts the top element of the stack from the second top element
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number in the Monty byte code file
 */
void sub(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n -= (*stack)->n;
	pop(stack, line_number);
}
