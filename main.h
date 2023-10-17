#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);

/* Handle format specifiers */
int handle_pointer(va_list args, char buffer[], int *count);

int handle_char(va_list args, char buffer[], int *count);
int handle_string(va_list args, char buffer[], int *count);
int handle_decimal(va_list args, char buffer[], int *count);
void handle_binary_recursive(unsigned int n, char buffer[], int *count);
void print_number_recursive(int num, char buffer[], int *count);
int handle_unsigned_num(va_list args, char buffer[], int *count);
int handle_octal(va_list args, char buffer[], int *count);
int handle_hex_lower(va_list args, char buffer[], int *count);
int handle_hex_upper(va_list args, char buffer[], int *count);
int handle_binary(va_list args, char buffer[], int *count);
int handle_reverse(va_list args, char buffer[], int *count);

int handle_str_custom(const char *str, char buffer[], int *count);

int handle_percent(char buffer[], int *count);
int handle_format_default(char specifier, char buffer[], int *count);
int handle_format(char specifier, va_list args, char buffer[], int *count);
int print_octal(unsigned int num, char buffer[], int *count);
int print_octal_r(unsigned int num, char buffer[], int *count, int digits);
/* Helper functions for printing different types */
int print_number(int num, char buffer[], int *count);
int get_num_digits(unsigned int num);
int print_hex(unsigned int num, char buffer[], int *count, int uppercase);
int print_str(const char *str, char buffer[], int *count);
int print_unsigned_num(unsigned int num, char buffer[], int *count);
int print_octal(unsigned int num, char buffer[], int *count);
int print_hex_lower(unsigned int num, char buffer[], int *count);
int print_hex_upper(unsigned int num, char buffer[], int *count);
int print_binary(unsigned int num, char buffer[], int *count);
int print_binary_recursive(unsigned int n, char buffer[], int *count);

/* Helper function for getting hexadecimal digits */
char hex_digit(int num);
char hex_digit_upper(int num);

#endif /* MAIN_H */

