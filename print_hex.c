#include "main.h"

/**
 * print_hex - Prints the hexadecimal representation of an unsigned integer
 * @num: Unsigned integer to print in hexadecimal
 * @buffer: Buffer to store the result
 * @count: Pointer to the count of characters printed
 * @uppercase: Flag to indicate whether to use uppercase letters (1) or not (0)
 *
 * Return: Number of characters printed
 */
int print_hex(unsigned int num, char buffer[], int *count, int uppercase)
{
	int hex[32];
	int i = 0;
	const char *hex_digits = "0123456789ABCDEF";

	if (uppercase)
		hex_digits = "0123456789ABCDEF";

	/* Convert the decimal number to hexadecimal */
	do {
		hex[i++] = num % 16;
		num /= 16;
	} while (num > 0);

	/* Print the hexadecimal representation to the buffer in reverse order */
	while (--i >= 0)
	{
		buffer[*count] = hex_digits[hex[i]];
		*count += 1;
	}

	return (get_num_digits(num));
}

