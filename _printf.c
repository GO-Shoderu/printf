#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _print_char - Print a character
 * @c: Character to be printed
 *
 * Description: This function prints a single character to stdout.
 *
 * Return: Number of characters printed
 */
int _print_char(char c)
{
write(1, &c, 1);
return (1);
}

/**
 * _print_string - Print a string
 * @str: String to be printed
 *
 * Description: This function prints a string to stdout.
 *
 * Return: Number of characters printed
 */
int _print_string(char *str)
{
int i = 0;
while (str && str[i])
{
write(1, &str[i], 1);
i++;
}
return (i);
}

/**
 * _print_percent - Print a percent symbol
 *
 * Description: This function prints a percent symbol to stdout.
 *
 * Return: Number of characters printed
 */
int _print_percent(void)
{
write(1, "%", 1);
return (1);
}

/**
 * _printf - Custom printf function
 * @format: Format string
 * @...: Variable arguments
 *
 * Description: Function processes the format string and prints output
 * to stdout according to the specified format specifiers.
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int i = 0, count = 0;

va_start(args, format);

while (format && format[i])
{
if (format[i] != '%')
{
write(1, &format[i], 1);
count++;
}
else
{
i++;
if (format[i] == '\0')
break;

if (format[i] == 'c')
{
count += _print_char(va_arg(args, int));
}
else if (format[i] == 's')
{
count += _print_string(va_arg(args, char *));
}
else if (format[i] == '%')
{
count += _print_percent();
}
}
i++;
}

va_end(args);
return (count);
}
