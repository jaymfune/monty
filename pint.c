#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @head: double pointer to the stack (stack_t)
 * @counter: line number
 *
 * Description: Prints the value at the top of the stack, followed by a new line.
 * If the stack is empty, prints an error message to stderr, closes the file,
 * frees memory, and exits with failure.
 */
void pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus->file);
		free(bus->Content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
