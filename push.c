#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: line number
 */
void push(stack_t **stack, unsigned int line_number)
{
	/* Get the value from bus */
	char *arg = bus.arg;
	stack_t *new_node;
	int value;

	if (!arg || !is_number(arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = atoi(arg);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;

	if (*stack == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}

	*stack = new_node;
}
