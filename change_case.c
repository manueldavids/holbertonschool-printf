#include "main.h"

/**
 * change_case - Processes a single format specifier.
 * @format: Format specifier to handle.
 * @args: List of arguments for the specifiers.
 * Return: Number of characters printed for the specifiers.
 **/

int change_case(const char *format, va_list arg)
{
        int count = 0;

        if (*format == '%')
        {
                count += _putchar('%');
                return (count);
        }
        switch (*format)
        {
                case 'c': /*%c char specifier*/
                        count += handler_c (args);
                        break;
                case 'i':
                case 'd': /*%d & %i # specifier*/
                        count += handlers_di(args);
                        break;
                default: /*Unknown specifier*/
                        count += _putchar('%');
                        count += _putchar(*format);
                        break;
        }
        return (count);
}
