#include "main.h"

/**
 * print_unsigned_number - Print an unsigned number with a specified base
 * @num: The unsigned number to print
 * @base: The base for formatting (e.g., 10 for decimal)
 * @count: Pointer to count of printed characters
 */
void print_unsigned_number(unsigned int num, int base, int *count)
{
if (num / base)
print_unsigned_number(num / base, base, count);

*count += _putchar(num % base + '0');
}
