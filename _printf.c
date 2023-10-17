#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function with a local buffer
 * @format: Format string
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;
	char buffer[1024];

	va_start(args, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%' && *(ptr + 1) != '\0')
		{
			int chars_written = handle_format(*(ptr + 1), args, buffer, &count);

			count += chars_written;
			ptr++; /* Skip the next character after '%' */
			if ((size_t)count >= sizeof(buffer))
			{
				write(1, buffer, count);
				count = 0;
}

		}
		else
		{
			buffer[count++] = *ptr;

			if ((size_t)count >= sizeof(buffer))
			{
				write(1, buffer, count);
				count = 0;
			}
		}
	}

	if (count > 0)
		write(1, buffer, count);

	va_end(args);

	return (count);
}

