#include "main.h"

/**
 * handle_unsigned - Handles the 'u' specifier for _printf
 * @args: Variable argument list
 *
 * Return: Number of characters printed
 */
int handle_unsigned_num(va_list args)
{
	return (print_unsigned_num(va_arg(args, unsigned int)));
}

