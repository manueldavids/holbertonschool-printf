#include "main.h"

/**
 * manage_x - Handles the %x and %X specifiers for hexadecimal numbers.
 * @args: The list of arguments.
 * @is_uppercase: Flag to determine case for hexadecimal (1 = uppercase, 0 = lowercase).
 *
 * Return: The number of characters printed.
 */
int manage_x(va_list args, int is_uppercase)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[20];
	int count = 0;
	int i = 0;
	convert_to_base(num, 16, buffer, is_uppercase);

	for (i = 0; buffer[i] != '\0'; i++)
		count += _putchar(buffer[i]);

	return (count);
}
