#include "main.h"

/**
 * print_hex_upper - Helper function to print an uppercase hexadecimal number
 * @num: Number to print
 *
 * Return: Number of characters printed
 */
int print_hex_upper(unsigned int num)
{
	int count = 0;

	if (num / 16 != 0)
		count += print_hex_upper(num / 16);

	if (num % 16 < 10)
		_putchar(num % 16 + '0');
	else
		_putchar(num % 16 - 10 + 'A');

	count++;

	return (count);
}

