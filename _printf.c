#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 * @...: Variable arguments
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
char c = va_arg(args, int);
write(1, &c, 1);
count++;
}
else if (format[i] == 's')
{
char *str = va_arg(args, char *);
int j = 0;
while (str && str[j])
{
write(1, &str[j], 1);
count++;
j++;
}
}
else if (format[i] == '%')
{
write(1, &format[i], 1);
count++;
}
}
i++;
}

va_end(args);
return (count);
}
