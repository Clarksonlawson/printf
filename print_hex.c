#include "main.h"

/**
 * print_hex - Helper function to print a hexadecimal number
 * @num: Hexadecimal number to print
 * @uppercase: Flag to indicate whether to print in uppercase
 *
 * Return: Number of characters printed
 */
int print_hex(unsigned int num, int uppercase)
{
	int count = 0;

	/* Hexadecimal digits */
	char hex_digits[] = "0123456789abcdef";

	if (uppercase)
		hex_digits[10] = 'A'; /* Change 'a' to 'A' for uppercase */

	/* Print digits */
	if (num / 16 != 0)
		count += print_hex(num / 16, uppercase);

	_putchar(hex_digits[num % 16]);
	count++;

	return (count);
}

