#include "main.h"

/**
 * handle_octal - Handles the octal specifier
 * @args: Variable argument list
 * @buffer: Buffer to store the result
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters printed
 */
int handle_octal(va_list args, char buffer[], int *count)
{
	unsigned int num = va_arg(args, unsigned int);
	int chars_written = print_octal(num, buffer, count);

	return (chars_written);
}
