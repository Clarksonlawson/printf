#include "main.h"

/**
 * print_unsigned - Helper function to print an unsigned integer
 * @num: Unsigned integer to print
 *
 * Return: Number of characters printed
 */
int print_unsigned(unsigned int num)
{
	int count = 0;

	/* Print digits */
	if (num / 10 != 0)
		count += print_unsigned(num / 10);

	_putchar(num % 10 + '0');
	count++;

	return (count);
}

