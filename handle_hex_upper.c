#include "main.h"

/**
 * handle_hex_upper - Handles the 'X' specifier for _printf
 * @args: Variable argument list
 *
 * Return: Number of characters printed
 */
int handle_hex_upper(va_list args)
{
	return (print_hex_upper(va_arg(args, unsigned int)));
}

