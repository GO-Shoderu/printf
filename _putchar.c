#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a char
 * @c: The character to print
 *
 * Return: Number of chars printed
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
