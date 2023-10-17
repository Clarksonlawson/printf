#include "main.h"

/**
 * handle_decimal - Handles the 'd' and 'i' conversion specifiers for _printf
 * @args: Variable argument list
 * @buffer: Local buffer to store characters
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters printed
 */
int handle_decimal(va_list args, char buffer[], int *count)
{
	int num = va_arg(args, int);

	if (num < 0)
	{
		buffer[(*count)++] = '-';
		num = -num;
	}
	print_number_recursive(num, buffer, count);
	return (*count);
}

/**
 * print_number_recursive - Helper function to print a number recursively
 * @num: Number to print
 * @buffer: Local buffer to store characters
 * @count: Pointer to the count of characters printed
 */
void print_number_recursive(int num, char buffer[], int *count)
{
	if (num / 10 != 0)
		print_number_recursive(num / 10, buffer, count);
	buffer[(*count)++] = (num % 10) + '0';
}
