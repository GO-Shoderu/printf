#include "main.h"
#include <stddef.h>

/**
 * print_address - Print an address (pointer)
 * @args: va_list containing the address to be printed
 * @count: Pointer to count of printed characters
 */
void print_address(va_list args, int *count)
{
void *ptr = va_arg(args, void *);
char *null_message = "(nil)";

if (ptr == NULL)
{
while (*null_message)
{
*count += _putchar(*null_message);
null_message++;
}
return;
}

*count += _putchar('0');
*count += _putchar('x');
print_hexadecimal((unsigned long int)ptr, 0, count);
}
