#include "monty.h"
/**
 * is_number - checks if a string is a valid integer
 * @str: input string
 * Return: true if valid integer, false otherwise
 */
bool is_number(const char *str)
{
	/* Check for NULL or empty string */
	if (str == NULL || *str == '\0')
		return (false);

	if (*str == '-' || *str == '+')
		str++;

	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (false);
		str++;
	}
	/* All characters are digits */
	return (true);
}
