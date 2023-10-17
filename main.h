#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);

/* Handle format specifiers */
int handle_char(va_list args);
int handle_string(va_list args);
int handle_decimal(va_list args);
int handle_unsigned_num(va_list args);
int handle_octal(va_list args);
int handle_hex_lower(va_list args);
int handle_hex_upper(va_list args);
int handle_binary(va_list args);
int handle_percent(void);
int handle_format_default(char specifier);
int handle_format(char specifier, va_list args);
/* Helper functions for printing different types */

int print_number(int num);
int print_str(const char *str);
int print_unsigned_num(unsigned int num);
int print_octal(unsigned int num);
int print_hex_lower(unsigned int num);
int print_hex_upper(unsigned int num);
int print_binary(unsigned int num);
int print_binary_recursive(unsigned int n);
/* Helper function for getting hexadecimal digits */
char hex_digit(int num);
char hex_digit_upper(int num);

#endif /* MAIN_H */

