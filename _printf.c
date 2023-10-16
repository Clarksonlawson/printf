#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * print_str - Helper function to print a string
 * @str: String to print
 * @count: Pointer to the count of printed characters
 */
void print_str(const char *str, int *count)
{
	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		(*count)++;
	}
}

/**
 * handle_format - Helper function to handle format specifiers
 * @format: Format specifier
 * @args: Variable argument list
 * @count: Pointer to the count of printed characters
 */
void handle_format(const char *format, va_list args, int *count)
{
	switch (*format)
	{
	case 'c':
		_putchar(va_arg(args, int));
		(*count)++;
		break;

	case 's':
		print_str(va_arg(args, char *), count);
		break;

	case '%':
		_putchar('%');
		(*count)++;
		break;

	default:
		_putchar(*format);
		(*count)++;
		break;
	}
}

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;

	va_start(args, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%' && *(ptr + 1) != '\0')
		{
			handle_format(ptr + 1, args, &count);
			ptr++; /* Skip the next character after '%' */
		}
		else
		{
			_putchar(*ptr);
			count++;
		}
	}

	va_end(args);

	return (count);
}

