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

#endif

