#include "main.h"

/**
 * handle_hex_lower - Handles the %x specifier
 * @args: Variable argument list
 *
 * Return: Number of characters printed
 */
int handle_hex_lower(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	return (print_hex_lower(num));
}

