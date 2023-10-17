#include "main.h"

/**
 * handle_binary - Handles the 'b' specifier for _printf
 * @args: Variable argument list
 *
 * Return: Number of characters printed
 */
int handle_binary(va_list args)
{
	return (print_binary(va_arg(args, unsigned int)));
}

