#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/* Function prototypes from _putchar.c */
int _putchar(char c);

/* Function prototypes from _printf.c */
void print_str(const char *str, int *count);
void handle_format(const char *format, va_list args, int *count);
int _printf(const char *format, ...);

#endif /* MAIN_H */

