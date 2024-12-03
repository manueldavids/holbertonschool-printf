#include "main.h"

/**
 * convert_base - Converts an unsigned number to a specified base.
 * @num: The number to convert.
 * @base: The base to convert to (e.g., 10 for decimal, 16 for hex).
 * @buffer: The buffer to store the resulting string.
 * @is_uppercase: Flag to determine case for hexadecimal
 */
void convert_base(unsigned int num, int base, char *buffer, int is_uppercase)
{
	const char *digits;
	int i, j;

	digits = is_uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	i = 0;

	if (num == 0)
	{
		buffer[i++] = '0';
	}

	while (num > 0)
	{
		buffer[i++] = digits[num % base];
		num /= base;
	}
	buffer[i] = '\0';

	for (j = 0; j < i / 2; j++)
	{
		char temp = buffer[j];

		buffer[j] = buffer[i - j - 1];
		buffer[i - j - 1] = temp;
	}
}
