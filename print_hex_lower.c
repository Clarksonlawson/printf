#include "main.h"

/**
 * print_hex_lower - signed integer
 * @num: Unsigned integer to print in lowercase hexadecimal
 * @buffer: Buffer to store the result
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters printed
 */
int print_hex_lower(unsigned int num, char buffer[], int *count)
{
	return (print_hex(num, buffer, count, 0));
}

