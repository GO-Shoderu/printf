#include <stdarg.h>
#include "main.h"

/**
 * print_integer - Prints an integer value
 * @num: The integer value to be printed
 * @count: Pointer to a counter for tracking printed characters
 *
 * Description: This function takes an integer value and prints the standard.
 *It handles both positive and negative numbers, converting them to strings
 *and printing each digit. If the number is negative, a '-' sign is printed
 *first. The function recursively divides the number by 10 to extract each
 *digit and uses the `_putchar` function to print each digit as a character.
 *The `count` pointer is used to update the total count of printed characters.
 *
 * Return: None (void)
 */

void print_integer(int num, int *count)
{
	if (num < 0)
	{
	*count += _putchar('-');
	num = -num;
	}
	if (num / 10)
	print_integer(num / 10, count);

	*count += _putchar('0' + num % 10);
}

/**
 * process_format - Process a format specifier
 * @format: The format specifier string
 * @args: List of arguments
 * @count: Pointer to count of printed characters
 */

void process_format(const char *format, va_list args, int *count)
{
	if (*format == 'c')
	print_char(args, count);
	else if (*format == 's')
	print_string(args, count);
else if (*format == 'd' || *format == 'i')

	{
	int num = va_arg(args, int);

	print_integer(num, count);
	}
	else if (*format == 'u')
	print_number(va_arg(args, int), 10, count);
else if (*format == 'o')
print_unsigned_number(va_arg(args, unsigned int), 8, count);
	else if (*format == 'x' || *format == 'X')
	print_hexadecimal(va_arg(args, unsigned int), (*format == 'X'), count);
	else if (*format == '%')
		*count += _putchar('%');
}
/**
 * _printf - Produces output according to a format
 * @format: The format string
 *
 * Return: Number of characters printed (excluding null byte for strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	const char *p;
	int count = 0;

	va_start(args, format);
	p = format;

	while (*p)
	{
	if (*p == '%')
	{
	p++;
	process_format(p, args, &count);
	}
	else
	{
	count += _putchar(*p);
	}
	p++;
	}
	va_end(args);
	return (count);
}
