#include "main.h"
#include <string.h>

/**
 * handle_reverse - Handles the custom conversion specifier 'r'
 * @args: Variable argument list
 * @buffer: The buffer to store the printed characters
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters printed
 */
int handle_reverse(va_list args, char buffer[], int *count)
{
	int i;
	char *str = va_arg(args, char *);
	int length = strlen(str);

	for (i = length - 1; i >= 0; i--)
	{
		buffer[*count] = str[i];
		(*count)++;
	}
	return (*count);
}

