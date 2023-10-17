#include "main.h"

/**
 * handle_binary - Handles the 'b' conversion specifier for _printf
 * @args: Variable argument list
 * @buffer: Local buffer to store characters
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters printed
 */
int handle_binary(va_list args, char buffer[], int *count)
{
	unsigned int num = va_arg(args, unsigned int);

	handle_binary_recursive(num, buffer, count);
	return (*count);
}

/**
 * handle_binary_recursive - Helper function to print binary recursively
 * @n: Number to print in binary
 * @buffer: Local buffer to store characters
 * @count: Pointer to the count of characters printed
 */
void handle_binary_recursive(unsigned int n, char buffer[], int *count)
{
	if (n > 1)
		handle_binary_recursive(n / 2, buffer, count);
	buffer[(*count)++] = (n % 2) + '0';
}

