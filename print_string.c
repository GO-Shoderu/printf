#include "main.h"

/**
 * print_str - Print a string
 * @str: String to print
 *
 * Return: Number of characters printed
 */
int print_str(char *str)
{
int count = 0;
if (str)
{
while (*str)
{
_putchar(*str);
count++;
str++;
}
}
return (count);
}
