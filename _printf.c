#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * _print_char - Print a character
 * @types: va_list containing arguments
 * @buffer: Character buffer
 * @flags: Formatting flags
 * @width: Formatting width
 * @precision: Formatting precision
 * @size: Size parameter (unused)
 *
 * This function prints a single character to stdout.
 *
 * Return: Number of characters printed
 */
int _print_char(va_list types, char buffer[], int flags, int width,
int precision, int size)
{
char c = va_arg(types, int);
(void)buffer;
(void)flags;
(void)width;
(void)precision;
(void)size;

write(1, &c, 1);
return (1);
}

/**
 * _print_string - Print a string
 * @types: va_list containing arguments
 * @buffer: Character buffer
 * @flags: Formatting flags
 * @width: Formatting width
 * @precision: Formatting precision
 * @size: Size parameter (unused)
 *
 * This function prints a string to stdout.
 *
 * Return: Number of characters printed
 */
int _print_string(va_list types, char buffer[], int flags, int width,
int precision, int size)
{
char *str = va_arg(types, char *);
int i = 0;
(void)buffer;
(void)flags;
(void)width;
(void)precision;
(void)size;

while (str && str[i])
{
write(1, &str[i], 1);
i++;
}
return (i);
}
