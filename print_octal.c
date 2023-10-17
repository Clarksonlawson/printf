#include "main.h"

/**
 * print_octal - Helper function to print an octal number
 * @num: Octal number to print
 *
 * Return: Number of characters printed
 */
int print_octal(unsigned int num)
{
	int count = 0;

	/* Print digits */
	if (num / 8 != 0)
		count += print_octal(num / 8);

	_putchar(num % 8 + '0');
	count++;

	return (count);
}

