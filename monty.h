#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct
{
	int items[MAX_SIZE];
	int top;
} Stack;

void initialize(Stack *stack);
void push(Stack *stack, int value);
void pall(const Stack *stack);
void process_file(const char *filename);

#endif /* MONTY_H */
	
