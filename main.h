#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
int manage_specifier(const char *format, va_list args);
int manage_c(va_list args);
int manage_s(va_list args);
int manage_di(va_list args);
int manage_u(va_list args);
int manage_o(va_list args);
int manage_p(va_list args);
int manage_x(va_list args, int is_uppercase);
void convert_to_base(unsigned int num, int base, char *buffer, int is_uppercase);

#endif
