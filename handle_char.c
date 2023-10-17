#include "main.h"

/**
 * handle_char - Handles the 'c' conversion specifier for _printf
 * @args: Variable argument list
 * @buffer: Local buffer to store characters
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters printed
 */
int handle_char(va_list args, char buffer[], int *count)
{
	char character = va_arg(args, int);

	buffer[(*count)++] = character;
	return (1);
}

