#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_str(char *str);
int print_number(int n);
void print_hexadecimal(unsigned long int num, int lowercase);

#endif /* MAIN_H */
