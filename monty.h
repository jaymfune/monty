#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct
{
	int items[MAX_SIZE];
	int top;
} Stack;

void initialize(Stack *stack);
void push(Stack *stack, int value);
void pall(const Stack *stack);
void pint(const Stack *stack);
void pop(Stack *stack, unsigned int counter);
void swap(Stack *stack, unsigned int counter);
void free_stack(Stack *stack);

#endif /* MONTY_H */
