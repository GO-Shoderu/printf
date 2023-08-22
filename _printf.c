#include <stdarg.h>
#include "main.h"

/**
 * process_format - Process a format specifier
 * @format: The format specifier string
 * @args: List of arguments
 * @count: Pointer to count of printed characters
 */
void process_format(const char *format, va_list args, int *count)
{
if (*format == 'c')
print_char(args, count);
else if (*format == 's')
print_string(args, count);
else if (*format == 'd' || *format == 'i')
print_number(va_arg(args, int), 10, count);
else if (*format == 'u')
print_unsigned_number(va_arg(args, unsigned int), 10, count);
else if (*format == 'o')
print_unsigned_number(va_arg(args, unsigned int), 8, count);
else if (*format == 'x' || *format == 'X')
print_hexadecimal(va_arg(args, unsigned int), (*format == 'X'), count);
else if (*format == '%')
*count += _putchar('%');
else if (*format == 'a')
print_address(args, count);
else if (*format == 'r')
print_unknown(format, count);
}

/**
 * _printf - Produces output according to a format
 * @format: The format string
 *
 * Return: Number of characters printed (excluding null byte for strings)
 */
int _printf(const char *format, ...)
{
va_list args;
const char *p;
int count = 0;

va_start(args, format);
p = format;

while (*p)
{
if (*p == '%')
{
p++;
process_format(p, args, &count);
}
else
{
count += _putchar(*p);
}
p++;
}

va_end(args);
return (count);
}
