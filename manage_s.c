#include "main.h"

/**
 * manage_s - Manages the %s format specifier for strings.
 * @args: The list of variable arguments passed to _printf.
 *
 * Return: The number of characters printed.
 */
int manage_s(va_list args)
{
	char *p = va_arg(args, char *);
	int count = 0;

	if (!p)
		p = "(null)";

	while (*p)
	{
		count += _putchar(*p);
		p++;
	}
	return (count);
}
