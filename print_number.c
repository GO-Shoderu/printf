#include "main.h"

/**
 * print_number - Print an integer
 * @num: The integer to print
 * @base: The base for printing (10 for decimal)
 * @count: Pointer to count of printed characters
 */
void print_number(int num, int base, int *count)
{
if (num < 0)
{
*count += _putchar('-');
num = -num;
}
if (num >= base)
print_number(num / base, base, count);
*count += _putchar((num % base) + '0');

}
