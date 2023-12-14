#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stack: double pointer to the beginning of the stack
 * @value: value to be pushed onto the stack
 * @line_number: unused parameter - remove it
 */
void push(stack_t **stack, int value, unsigned int line_number)
{
    (void)line_number;

    stack_t *new_node = malloc(sizeof(stack_t));
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
