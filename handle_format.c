#include "main.h"

/**
 * handle_format - Handles the conversion specifiers for _printf
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
		count += handle_char(args);
		break;
	case 's':
		count += handle_string(args);
		break;
	case 'd':
	case 'i':
		count += handle_decimal(args);
		break;
	case 'u':
		count += handle_unsigned_num(args);
		break;
	case 'o':
		count += handle_octal(args);
		break;
	case 'x':
		count += handle_hex_lower(args);
		break;
	case 'X':
		count += handle_hex_upper(args);
		break;
	case 'b':
		count += handle_binary(args);
		break;
	case '%':
		count += handle_percent();
		break;
	default:
		count += handle_format_default(specifier);
		break;
	}

	return (count);
}
