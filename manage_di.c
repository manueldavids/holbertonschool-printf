#include "main.h"
/**
 * manage_di - Handles the conversion specifiers 'd' and 'i'.
 * @args: Variadic arguments list containing the integer to print.
 *
 * Return: The number of characters printed.
 */
int manage_di(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int num;
	char buffer[20];
	int i = 0;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	do {
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	} while (num > 0);

	while (i--)
		count += _putchar(buffer[i]);

	return (count);
}
