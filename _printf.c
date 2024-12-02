#include "main.h"

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
	{
		format = "(null)";
		while (*format)
		{
			_putchar(*format);
			format++;
		}
		_putchar('\n');
		return (0);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			change_case(format, args);
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count + 1);

	return(count);
	
}
