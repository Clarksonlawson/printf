#include "main.h"

/**
 * handle_percent - Handles the percent specifier
 * @buffer: Buffer to store the result
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters printed
 */
int handle_percent(char buffer[], int *count)
{

	buffer[*count] = '%';
	*count += 1;
	return (1);
}

