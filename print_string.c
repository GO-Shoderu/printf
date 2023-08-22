#include "main.h"

/**
 * print_string - Print a string
 * @args: va_list containing the string to be printed
 * @count: Pointer to count of printed characters
 */
void print_string(va_list args, int *count)
{
char *str = va_arg(args, char *);
int i = 0;

if (str == NULL)
str = "(null)";

while (str[i])
{
*count += _putchar(str[i]);
i++;
}
}
