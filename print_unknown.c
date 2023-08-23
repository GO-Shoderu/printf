#include "main.h"

/**
 * print_unknown - Print unknown specifiers
 * @format: The unknown specifier
 * @count: Pointer to count of printed characters
 */
void print_unknown(const char *format, int *count)
{
_putchar('%');
_putchar(*format);
*count += 2;
}
