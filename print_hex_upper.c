#include "main.h"

/**
 * print_hex_upper - Prints of an unsigned integer
 * @num: Unsigned integer to print in uppercase hexadecimal
 * @buffer: Buffer to store the result
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters printed
 */
int print_hex_upper(unsigned int num, char buffer[], int *count)
{
	return (print_hex(num, buffer, count, 1));
}

