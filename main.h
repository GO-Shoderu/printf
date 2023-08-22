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

#endif /* MAIN_H */
