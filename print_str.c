#include "main.h"
#include <stddef.h>
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

