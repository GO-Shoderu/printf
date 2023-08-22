#include "main.h"
#include <ctype.h>

/**
 * print_hexadecimal - Print a number in hexadecimal format
 * @num: The number to print in hexadecimal
 * @uppercase: Flag to indicate uppercase formatting
 * @count: Pointer to count of printed characters
 */
void print_hexadecimal(unsigned int num, int uppercase, int *count)
{
char hexDigits[] = "0123456789abcdef";
int base = 16;

if (num / base)
print_hexadecimal(num / base, uppercase, count);

*count += _putchar(uppercase ? toupper(hexDigits[num % base])
: hexDigits[num % base]);
}
