#include "main.h"

/**
 * handle_format_default - Handles the default case for an unknown specifier
 * @specifier: Unknown specifier
 *
 * Return: Number of characters printed
 */
int handle_format_default(char specifier)
{
	return (_putchar('%') + _putchar(specifier));
}

