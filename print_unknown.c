#include "main.h"

/**
 * print_unknown - Print an unknown format specifier
 * @format: The unknown format specifier
 * @count: Pointer to count of printed characters
 */
void print_unknown(const char *format, int *count)
{
*count += _putchar('%');
while (*format && *format != ' ')
{
*count += _putchar(*format);
format++;
}
}
