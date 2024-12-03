#include "main.h"

/**
 * convert_to_base - Converts an unsigned number to a specified base.
 * @num: The number to convert.
 * @base: The base to convert to (e.g., 10 for decimal, 16 for hex).
 * @buffer: The buffer to store the resulting string.
 * @is_uppercase: Flag to determine case for hexadecimal (1 = uppercase, 0 = lowercase).
 */
void convert_to_base(unsigned int num, int base, char *buffer, int is_uppercase)
{
    const char *digits = is_uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
    int i = 0;
    int j = 0;
	int start = 0;
	int m = 0;
	int k = 0;

    if (num == 0)
    {
        buffer[i++] = '0';
    }
    while (num > 0)
    {
        buffer[i++] = digits[num % base];
        num /= base;
    }
    buffer[i] = '\0';

    /* Reverse the string to get the correct order */
    for (j = 0; j < i / 2; j++)
    {
        char temp = buffer[j];
        buffer[j] = buffer[i - j - 1];
        buffer[i - j - 1] = temp;
    }


    while (buffer[start] == '0' && start < i - 1) {
        start++;
    }
    for (j = 0; j < i - start; j++) {
        buffer[j] = buffer[start + j];
    }
    buffer[i - start] = '\0';  /* Null-terminate the new string */

	if (i > 2 && buffer[0] == '0' && buffer[1] == '0') {


        while (k < i && buffer[k] == '0') {
            k++;  /*** Skip over leading zeros */
        }

        for (m = 0; k < i; m++, k++) {
            buffer[m] = buffer[k];
        }
        buffer[m] = '\0';  /*** Null-terminate the string */
    }
}
