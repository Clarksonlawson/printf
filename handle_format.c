#include "main.h"
#include <stdarg.h>

/**
 * handle_format - Helper function to handle format specifiers
 * @specifier: Format specifier
 * @args: Variable argument list
 *
 * Return: Number of characters printed
 */
int handle_format(char specifier, va_list args)
{
	int count = 0;

	switch (specifier)
	{
	case 'c':
		_putchar(va_arg(args, int));
		count++;
		break;

	case 's':
		count += print_str(va_arg(args, const char *));
		break;

	case 'd':
	case 'i':
		count += print_number(va_arg(args, int));
		break;

	case 'b':
		count += print_binary(va_arg(args, unsigned int));
		break;

	case '%':
		_putchar('%');
		count++;
		break;

	default:
		_putchar('%');
		_putchar(specifier);
		count += 2;
		break;
	}

	return (count);
}

