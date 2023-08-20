#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - entry level to variadic function
 * @format: gets the parameters
 * Return: returns something
 */

int _printf(const char *format, ...)
{
	va_list args;
	int number_character = 0;
	const char *p;
	const char *str;
	int num;
	int num_digits;
	int temp;
	int i;
	char *digits;

	va_start(args, format);

	for (p = format; *p != '\0'; ++p)
	{
		switch (*p)
		{
			case '%':
			switch (*++p)
			{
				case 's':
				{
					str = va_arg(args, const char*);
					while (*str != '\0')
					{
						_putchar(*str);
						number_character++;
						str++;
					}
				}
				continue;

				case 'c':
				_putchar((char)va_arg(args, int));
				number_character++;
				continue;

				case '%':
				_putchar('%');
				number_character++;
				continue;

				case 'i':
				case 'd':
				{
					num = va_arg(args, int);

					if (num < 0)
					{
						_putchar('-');
						num = -num;
						number_character++;
					}

					num_digits = 0;
					temp = num;

					do {
						temp /= 10;
						num_digits++;
					} while (temp > 0);

					digits = (char *)malloc(num_digits + 1);

					for (i = num_digits - 1; i >= 0; i--)
					{
						digits[i] = num % 10 + '0';
						num /= 10;
					}

					digits[num_digits] = '\0';

					for (i = 0; i < num_digits; i++)
					{
						_putchar(digits[i]);
						number_character++;
					}

					free(digits);
				}
				continue;
			}
		}
		_putchar(*p);
		number_character++;
	}
	va_end(args);
	return (number_character);
}
