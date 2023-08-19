#include "main.h"
#include <stdarg.h>

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
			}
		}
		_putchar(*p);
		number_character++;
	}
	va_end(args);
	return (number_character);
}
