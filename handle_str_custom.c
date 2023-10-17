/* handle_str_custom.c */

#include "main.h"
#include <stddef.h>
/**
 * handle_str_custom - Handles the custom string conversion specifier %S
 * @str: The string to print
 * @buffer: The buffer to store the printed characters
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters printed
 */
int handle_str_custom(const char *str, char buffer[], int *count)
{
	int chars_printed = 0;

	if (str == NULL)
	{
		chars_printed += print_str("(null)", buffer, count);
		return (chars_printed);
	}

	while (*str != '\0')
	{
		if (*str < 32 || *str >= 127)
		{
			chars_printed += _putchar(*str);
		}
		else
		{
			chars_printed += _putchar(*str);
		}
		str++;
	}
	return (chars_printed);
}

