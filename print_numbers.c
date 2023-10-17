#include "main.h"

/**
 * print_number - Helper function to print a number
 * @num: Number to print
 *
 * Return: Number of characters printed
 */
int print_number(int num)
{
	int count = 0;

	/* Handle negative numbers */
	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	/* Print digits */
	if (num / 10 != 0)
		count += print_number(num / 10);

	_putchar(num % 10 + '0');
	count++;

	return (count);
}

