#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned integer
 * @num: Unsigned integer to print in binary
 * @buffer: Buffer to store the result
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters printed
 */
int print_binary(unsigned int num, char buffer[], int *count)
{
	int binary[32];
	int i = 0;

	/* Convert the decimal number to binary */
	do {
		binary[i++] = num % 2;
		num /= 2;
	} while (num > 0);

	/* Print the binary representation to the buffer in reverse order */
	while (--i >= 0)
	{
		buffer[*count] = binary[i] + '0';
		*count += 1;
	}

	return (get_num_digits(num));
}
