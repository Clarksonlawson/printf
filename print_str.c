#include "main.h"
#include <stddef.h>

/**
 * print_str - Prints a string to a buffer
 * @str: The string to print
 * @buffer: The buffer to store the printed characters
 * @count: Pointer to the count of characters printed
 *
 * Return: The number of characters printed (excluding null byte)
 */
int print_str(const char *str, char buffer[], int *count)
{
	int length = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		buffer[*count] = *str;
		length++;
		(*count)++;
		str++;
	}

	return (length);
}

