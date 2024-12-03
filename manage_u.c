#include "main.h"

/**
 * manage_u - Handles the %u specifier for unsigned integers.
 * @args: The list of arguments.
 *
 * Return: The number of characters printed.
 */
int manage_u(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[20];
	int count = 0;
	int i = 0;

	convert_base(num, 10, buffer, 0);

	for (i = 0; buffer[i] != '\0'; i++)
		count += _putchar(buffer[i]);

	return (count);
}
