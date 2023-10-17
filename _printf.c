#include "main.h"
#include <stdarg.h>

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

