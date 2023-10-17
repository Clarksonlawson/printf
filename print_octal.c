#include "main.h"

/**
 * print_octal - Prints an octal number
 * @num: Octal number to print
 * @buffer: Buffer to store the result
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters printed
 */
int print_octal(unsigned int num, char buffer[], int *count)
{
	int digits;

	if (num == 0)
	{
		buffer[*count] = '0';
		(*count)++;
		return (1);
	}

	digits = get_num_digits(num);
	return (print_octal_r(num, buffer, count, digits));
}

/**
 * print_octal_r - Recursively prints an octal number
 * @num: Octal number to print
 * @buffer: Buffer to store the result
 * @count: Pointer to the count of characters printed
 * @digits: Number of digits in the octal number
 *
 * Return: Number of characters printed
 */
int print_octal_r(unsigned int num, char buffer[], int *count, int digits)
{
	if (num == 0)
		return (0);

	(*count) += print_octal_r(num / 8, buffer, count, digits - 1);
	buffer[*count] = num % 8 + '0';
	(*count)++;

	return (1);
}

