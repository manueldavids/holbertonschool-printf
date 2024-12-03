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

	count += _putchar(va_arg(args, int));

	return (count);
}
