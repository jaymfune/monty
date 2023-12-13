#include "monty.h"

void process_file(const char *filename)
{
	FILE *file = fopen(filename, "r");
	if (file == NULL)
	{
		perror("Error opening file");
		exit(EXIT_FAILURE);
	}

	char opcode[10];
	int value;

	Stack myStack;
	initialize(&myStack);

	while (fscanf(file, "%s", opcode) != EOF)
	{
		if (strcmp(opcode, "push") == 0)
		{
			if (fscanf(file, "%d", &value) != 1)
			{
				fprintf(stderr, "Error: push requires an integer argument\n");
				exit(EXIT_FAILURE);
			}
			push(&myStack, value);
		}
		else if (strcmp(opcode, "pall") == 0)
		{
			pall(&myStack);
		}
	}

	fclose(file);
}
