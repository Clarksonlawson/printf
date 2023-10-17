#include "main.h"

/**
 * print_rot13 - Applies the rot13 algorithm to a string and prints the result
 * @str: The input string
 * @buffer: The buffer to store the printed characters
 * @count: Pointer to the count of characters printed
 *
 * Return: Number of characters printed
 */
int print_rot13(const char *str, char buffer[], int *count)
{
	int i;
	int chars_printed = 0;
	char rot13_table[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			buffer[*count] = rot13_table[str[i] - 'A'];
		}
		else
		{
			buffer[*count] = str[i];
		}

		*count += 1;
		chars_printed += 1;
	}

	return (chars_printed);
}

