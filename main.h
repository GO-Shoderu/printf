#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
void print_char(va_list args, int *count);
void print_string(va_list args, int *count);
void print_number(int num, int base, int *count);
void print_unsigned_number(unsigned int num, int base, int *count);
void print_hexadecimal(unsigned int num, int uppercase, int *count);
void process_format(const char *format, va_list args, int *count);
int print_octal(unsigned int n, int *count);
int print_hexadecimal_lower(unsigned int n, int *count);
int print_hexadecimal_upper(unsigned int n, int *count);

#endif /* MAIN_H */
