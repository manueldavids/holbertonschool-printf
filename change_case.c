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
		case 'u':
			count += manage_u(args);
			break;
		case 'o':
			count += manage_o(args);
			break;
		case 'x':
			count += manage_x(args, 0); /* Lowercase hexadecimal */
			break;
		case 'X':
			count += manage_x(args, 1); /* Uppercase hexadecimal */
			break;
		case 'p':
			count += manage_p(args);
			break;
		default: /* Unknown specifier */
			count += _putchar('%');
			count += _putchar(*format);
			break;
	}
	return (count);
}
