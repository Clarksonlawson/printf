#include "main.h"

/**
 * print_hex_lower - Helper function to print a number in lowercase hexadecimal
 * @num: Number to print
 *
 * Return: Number of characters printed
 */
int print_hex_lower(unsigned int num)
{
	int count = 0;

	if (num / 16 != 0)
		count += print_hex_lower(num / 16);

	count += _putchar(hex_digit(num % 16));

	return (count);
}

/**
 * hex_digit - Helper function to get the lowercase hexadecimal digit
 * @num: Number (0 to 15)
 *
 * Return: Corresponding hexadecimal digit character
 */
char hex_digit(int num)
{
	return (num < 10) ? (char)('0' + num) : (char)('a' + num - 10);
}

