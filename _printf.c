#include "main.h"
#include <stdarg.h>

/**
 * _printf - Custom printf function
 * @format: Format string
 * @...: Variable arguments
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'c')
{
int c = va_arg(args, int);
count += _putchar(c);
}
else if (*format == 's')
{
char *s = va_arg(args, char *);
if (s)
count += print_str(s);
}
else if (*format == '%')
{
count += _putchar('%');
}
else if (*format == 'd' || *format == 'i')
{
int num = va_arg(args, int);
count += print_number(num);
}
else
{
count += _putchar(*format);
}
format++;
}
else
{
count += _putchar(*format);
format++;
}
}
va_end(args);
return (count);
}
