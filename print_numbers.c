#include "main.h"

/**
 * print_numbers - Prints an unsigned integer to a buffer
 * @num: The unsigned integer to print
 * @buffer: The buffer to store the printed characters
 * @count: Pointer to the count of characters printed
 *
 * Return: Always returns 1 (for now)
 */
int print_numbers(unsigned int num, char buffer[], int *count)
{
	print_number_recursive(num, buffer, count);
	return (1);
}

