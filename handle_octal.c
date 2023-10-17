#include "main.h"

/**
 * handle_octal - Handles the 'o' specifier for _printf
 * @args: Variable argument list
 *
 * Return: Number of characters printed
 */
int handle_octal(va_list args)
{
	return (print_octal(va_arg(args, unsigned int)));
}

