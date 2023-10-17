#include "main.h"

/**
 * print_binary - Helper function to print a binary number
 * @n: Decimal number to convert to binary
 *
 * Return: Number of characters printed
 */
int print_binary(unsigned int n)
{
	if (n == 0)
		return (0);

	return (print_binary_recursive(n));
}

/**
 * print_binary_recursive - Recursive helper function to print binary
 * @n: Decimal number to convert to binary
 *
 * Return: Number of characters printed
 */
int print_binary_recursive(unsigned int n)
{
	int count = 0;

	if (n / 2 != 0)
		count += print_binary_recursive(n / 2);

	_putchar(n % 2 + '0');
	count++;

	return (count);
}

