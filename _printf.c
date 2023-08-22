#include <stdarg.h>
#include "main.h"

/**
 * print_char - Print a character
 * @args: List of arguments
 * @count: Pointer to count of printed characters
 */
void print_char(va_list args, int *count)
{
char c = va_arg(args, int);
*count += _putchar(c);
}

/**
 * print_string - Print a string
 * @args: List of arguments
 * @count: Pointer to count of printed characters
 */
void print_string(va_list args, int *count)
{
char *str = va_arg(args, char*);
while (*str)
{
*count += _putchar(*str);
str++;
}
}

/**
 * _printf - produces output according to a format
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
if (*p == 'c')
print_char(args, &count);
else if (*p == 's')
print_string(args, &count);
else if (*p == '%')
count += _putchar('%');
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
