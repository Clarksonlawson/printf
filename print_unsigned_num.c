#include "main.h"

/**
 * print_unsigned_num - Helper function to print an unsigned number
 * @num: Number to print
 *
 * Return: Number of characters printed
 */
int print_unsigned_num(unsigned int num)
{
	int count = 0;

	if (num / 10 != 0)
		count += print_unsigned_num(num / 10);

	_putchar(num % 10 + '0');
	count++;

	return (count);
}

