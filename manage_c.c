#include "main.h"

/**
 * manage_c - Handles the %c format specifier for characters.
 * @args: The list of variable arguments passed to _printf.
 *
 * Return: The number of characters printed.
 */
int manage_c(va_list args)
{
	int count = 0;
	char c = va_arg(args, int);

	if (c == 0)
	{
		return (-1);
	}
	count += _putchar(c);

	return (count);
}
