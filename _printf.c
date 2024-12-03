#include "main.h"

/**
 * _printf - Custom printf implementation to handle various format specifiers.
 * @format: The format string containing the characters & specifiers to print.
 *
 * Return: The total number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	if (!*format)
	{
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += manage_specifier(format, args);
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
