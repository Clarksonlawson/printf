#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * handle_pointer - Handles the %p specifier for _printf
 * @args: Variable argument list
 * @buffer: The buffer to store the printed characters
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters printed
 */
int handle_pointer(va_list args, char buffer[], int *count)
{
	int chars_printed = 0;
	void *ptr = va_arg(args, void *);

	sprintf(buffer, "%p", ptr);
	chars_printed += print_str(buffer, buffer, count);
	*count += chars_printed;
	return (chars_printed);
}

