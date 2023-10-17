#include "main.h"

/**
 * print_unsigned_num - Prints an unsigned number
 * @num: Unsigned number to print
 * @buffer: Buffer to store the result
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters printed
 */
int print_unsigned_num(unsigned int num, char buffer[], int *count)
{
	if (num / 10 != 0)
		print_unsigned_num(num / 10, buffer, count);

	buffer[*count] = num % 10 + '0';
	(*count)++;

	return (1);
}

