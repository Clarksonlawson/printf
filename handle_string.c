#include "main.h"
#include <unistd.h>

#include <stddef.h>
/**
 * handle_string - Handles the 's' conversion specifier for _printf
 * @args: Variable argument list
 * @buffer: Local buffer to store characters
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters printed
 */
int handle_string(va_list args, char buffer[], int *count)
{
	const char *str = va_arg(args, const char *);

	if (str == NULL)
		str = "(null)";
	while (*str != '\0')
	{
		buffer[(*count)++] = *str;
		str++;
		if (*count == 1023)
		{
			write(1, buffer, *count);
			*count = 0;
		}
	}
	return (*count);
}

