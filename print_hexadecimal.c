#include "main.h"
#include <ctype.h>

/**
 * print_hexadecimal - Print a number in hexadecimal format
 * @num: The number to print in hexadecimal
 * @lowercase: Flag to indicate lowercase formatting
 * @count: Pointer to count of printed characters
 */
void print_hexadecimal(unsigned int num, int lowercase, int *count)
{
char hexDigits[] = "0123456789abcdef";
int base = 16;

if (num / base)
print_hexadecimal(num / base, lowercase, count);

*count += lowercase ?
tolower(hexDigits[num % base]) : hexDigits[num % base];
}
