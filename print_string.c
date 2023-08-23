#include "main.h"

/**
 * print_string - Print a string
 * @args: va_list containing the string to be printed
 * @count: Pointer to count of printed characters
 */
void print_string(va_list args, int *count)
{
char *s = va_arg(args, char *);
if (s)
{
while (*s)
{
*count += _putchar(*s);
s++;
}
}
}
