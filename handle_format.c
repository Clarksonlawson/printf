#include "main.h"
#include <stdarg.h>

/**
 * handle_format - Helper function to handle format specifiers
 * @specifier: Format specifier
 * @args: Variable argument list
 * @buffer: Local buffer for storing characters
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters written to the buffer
 */
int handle_format(char specifier, va_list args, char *buffer, int *count)
{
	int chars_written = 0;

	switch (specifier)
	{
	case 'c':
		chars_written = handle_char(args, buffer, count);
		break;

	case 's':
		chars_written = handle_string(args, buffer, count);
		break;

	case 'd':
	case 'i':
		chars_written = handle_decimal(args, buffer, count);
		break;

	case 'b':
		chars_written = handle_binary(args, buffer, count);
		break;
	case 'S':
		chars_written = handle_str_custom(va_arg(args, const char *), buffer, count);
		break;
	case 'p':
		chars_written += handle_pointer(args, buffer, count);
		break;
	case 'r':
		chars_written += handle_reverse(args, buffer, count);
		break;
	case 'R':
		chars_written += print_rot13(va_arg(args, const char *), buffer, count);
		break;

	case '%':
		buffer[*count] = '%';
		(*count)++;
		chars_written = 1;
		break;

	default:
		chars_written = handle_format_default(specifier, buffer, count);
		break;
	}

	return (chars_written);
}
