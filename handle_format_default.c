#include "main.h"

/**
 * handle_format_default - Handles default case for unknown specifier
 * @specifier: Unknown specifier
 * @buffer: The buffer
 * @count: the count
 * Return: Number of characters printed
 */
int handle_format_default(char specifier, char buffer[], int *count)
{
	buffer[(*count)++] = '%';
	buffer[(*count)++] = specifier;
	return (*count);
}

