#include "main.h"
#include <stdarg.h>
#include <stddef.h>

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
			count += handle_format(*(ptr + 1), args);
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

/**
 * print_str - Helper function to print a string
 * @str: String to print
 *
 * Return: Number of characters printed
 */
int print_str(const char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(*str);
		count++;
		str++;
	}

	return (count);
}

/**
 * print_number - Helper function to print a number
 * @num: Number to print
 *
 * Return: Number of characters printed
 */
int print_number(int num)
{
	int count = 0;

	/* Handle negative numbers */
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	/* Print digits */
	if (num / 10 != 0)
		count += print_number(num / 10);

	_putchar(num % 10 + '0');
	count++;

	return (count);
}

