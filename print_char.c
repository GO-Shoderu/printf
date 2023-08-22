#include "main.h"

/**
 * print_char - Print a single character
 * @args: va_list containing the character to be printed
 * @count: Pointer to count of printed characters
 */

void print_char(va_list args, int *count)
{
char c = va_arg(args, int);
*count += _putchar(c);
}
