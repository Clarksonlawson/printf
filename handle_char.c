#include "main.h"

/**
 * handle_char - Handles the 'c' specifier for _printf
 * @args: Variable argument list
 *
 * Return: Number of characters printed
 */
int handle_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

