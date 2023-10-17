#include "main.h"

/**
 * handle_string - Handles the 's' specifier for _printf
 * @args: Variable argument list
 *
 * Return: Number of characters printed
 */
int handle_string(va_list args)
{
	return (print_str(va_arg(args, const char *)));
}

