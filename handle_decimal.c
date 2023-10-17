#include "main.h"

/**
 * handle_decimal - Handles the 'd' and 'i' specifiers for _printf
 * @args: Variable argument list
 *
 * Return: Number of characters printed
 */
int handle_decimal(va_list args)
{
	return (print_number(va_arg(args, int)));
}

