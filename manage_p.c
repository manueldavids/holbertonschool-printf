#include "main.h"

/**
 * manage_p - Handles the %p specifier to print addresses.
 * @args: The list of arguments.
 *
 * Return: The number of characters printed.
 */
int manage_p(va_list args)
{
    unsigned long address = (unsigned long)va_arg(args, void*);
    char buffer[20];  /* Enough for 16-digit hex + "0x" */
    int count = 0;
    int i;
    int len = 0;

    /* Convert the address to hexadecimal (lowercase) */
    convert_to_base(address, 16, buffer, 0);

    /* Print the "0x" prefix */
    count += _putchar('0');
    count += _putchar('x');

    /* Ensure that the address is fully padded with leading zeros */
    while (buffer[len] != '\0')
	{
        len++;
    }
    while (len < 16)
	{  /* Add leading zeros if address is shorter than 16 characters*/
        count += _putchar('0');
        len++;
    }

    for (i = 0; buffer[i] != '\0'; i++)
	{
        count += _putchar(buffer[i]);
    }

    return (count);
}
