#include "main.h"

/**
 * handle_unsigned_num - Handles the unsigned decimal specifier
 * @args: Variable argument list
 * @buffer: Buffer to store the result
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters printed
 */
int handle_unsigned_num(va_list args, char buffer[], int *count)
{
	unsigned int num = va_arg(args, unsigned int);
	int num_digits = 0;

	/* Call helper function to get the number of digits */
	num_digits = get_num_digits(num);

	/* Print the number to the buffer in reverse order */
	while (num_digits > 0)
	{
		buffer[*count] = (num % 10) + '0';
		num /= 10;
		*count += 1;
		num_digits -= 1;
	}

	return (get_num_digits(va_arg(args, unsigned int)));
}

/**
 * get_num_digits - Helper function to digits in an unsigned integer
 * @num: Unsigned integer
 *
 * Return: Number of digits
 */
int get_num_digits(unsigned int num)
{
	int num_digits = 0;

	/* Count the number of digits */
	do {
		num_digits += 1;
		num /= 10;
	} while (num > 0);

	return (num_digits);
}

