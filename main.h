#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/* Function declarations */
int  _putchar(char c);
int _printf(const char *format, ...);
int print_str(const char *str);
int handle_format(char specifier, va_list args);
int print_number(int num);
int print_binary(unsigned int num);
int print_binary_recursive(unsigned int n);
#endif /* MAIN_H */

