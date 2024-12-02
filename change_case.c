#include "main.h"

/**
 * manage_specifier - Processes a single format specifier.
 * @format: The format specifier to handle.
 * @args: The list of arguments for the specifier.
 *
 * Return: The number of characters printed for the specifier.
 */

int manage_specifier(const char *format, va_list args)
{
	int count = 0;

	switch (*format)
	{
		case 'c': /*%c char specifier*/
			count += manage_c(args);
			break;
		case 's':
			count += manage_s(args);
			break;
		case 'i':
		case 'd': /*%d & %i # specifier*/
			count += manage_di(args);
			break;
		case '%':
			count += _putchar('%');
			break;
		default: /*Unknown specifier*/
			count += _putchar('%');
			count += _putchar(*format);
			break;
	}
	return (count);
}

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

	/* If the character is null, print '0' */
	if (c == 0)
	{
		c = '0';
		count += _putchar(c);
		return (0);
	}
	else
	{
		/* Print the character */
		count += _putchar(c);
	}

	return (count);
}

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

	/* If the string is NULL, use "(null)" */
	if (!p)
	{
		p = "(null)";
		while (*p)
		{
			count += _putchar(*p);
			p++;
		}
		return (0);
	}

	else
	{
		/* Loop through the string and print each character */
		while (*p)
		{
			count += _putchar(*p);
			p++;
		}
	}
	return (count);
}

/**
 * manage_di - Handles the conversion specifiers 'd' and 'i'
 * @args: Variadic arguments list containing the integer to print
 * Return: The number of characters printed
 */
int manage_di(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int num;
	char buffer[20];
	int i = 0;

	if (n < 0) /* Negative numbers */
	{
		count += _putchar('-'); /* Prints '-' before negative numbers */
		num = -n; /* Convert to positive for printing */
	}
	else
	{
		num = n; /* Regular numbers */
	}
	do {
		buffer[i++] = (num % 10) + '0'; /* Get the last digit */
		num /= 10; /* Remove the last digit */
	} while (num > 0);
	/* Print the digits in the correct order */
	while (i--)
	{
		count += _putchar(buffer[i]);
	}
	return (count);
}
